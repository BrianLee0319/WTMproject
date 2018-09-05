#include "rocc.h"
#include "stdio.h"
static inline void rocc_write(int idx, unsigned long data)
{
	ROCC_INSTRUCTION_SS(0, data, idx, 0);
}

static inline unsigned long rocc_read(int idx)
{
	unsigned long value,tmp;
	ROCC_INSTRUCTION_DSS(0, value, 0, idx, 1);
	tmp = value&0xFFFFFFFF;	
	return (value>>32)+tmp;
}

static inline void rocc_load(int idx, void *ptr)
{
	asm volatile ("fence");
	ROCC_INSTRUCTION_SS(0, (uintptr_t) ptr, idx, 2);
}

static inline void rocc_mul(int idx)
{
	ROCC_INSTRUCTION_SS(0, 0, idx, 3);
}

unsigned long read_cycles(void)
{
    unsigned long cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

int main(void)
{
	unsigned long image[12][12],filter[4][4];
	unsigned long psum = 0,var;
	unsigned long start, end;
    	int i,j,k,l;
	
	for(i=0;i<12;i++){
	for(j=0;j<12;j++){
	image[i][j]=i+j+1;
	printf("%lu ",image[i][j]);
	}
	printf("\n");
	}
	
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	filter[i][j]=i+j+1;
	printf("%lu ",filter[i][j]);
	}
	printf("\n");
	}
	
	//sw-verison
	start = read_cycles();
	for(l=0;l<9;l++){
	for(k=0;k<9;k++){
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	psum = psum+image[i+k][j+l]*filter[i][j];
	}
	}
	printf("%lu ",psum);
	psum=0;
	}
	printf("\n");
	}
	end = read_cycles();
	printf("Took %lu cycles\n", end - start);

	//hw-version
	start = read_cycles();
	for(l=0;l<9;l++){
	for(k=0;k<9;k++){
	for(i=0;i<4;i++){
	for(j=0;j<4;j=j+2){
	rocc_mul(2);
	unsigned long pe_image = image[i+l][j+k]+(image[i+l][j+k+1]<<32);
	unsigned long pe_filter = filter[i][j]+(filter[i][j+1]<<32);
	//printf("%lu ",pe_image);
	//printf("%lu\n",pe_filter);
	rocc_load(0, &pe_image);
	rocc_load(1, &pe_filter);
	rocc_mul(2);
	var = rocc_read(2);
	var = 0;
	psum = psum+rocc_read(2);
	//printf("%lu ",rocc_read(2));
	}
	}
	printf("%lu ",psum);
	psum=0;
	}
	printf("\n");
	}
	end = read_cycles();
	printf("Took %lu cycles\n", end - start);

	return 0;
}
