#include "rocc.h"
#include "stdio.h"

static inline void rocc_write(int idx, unsigned long data)
{
	ROCC_INSTRUCTION_SS(0, data, idx, 0);
}

static inline unsigned long rocc_read(int idx)
{
	unsigned long value;
	ROCC_INSTRUCTION_DSS(0, value, 0, idx, 1);
	return value;
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
	unsigned long image[5][5],filter[3][3];
	unsigned long long psum = 0;
	unsigned long start, end;
    	int i,j,k,l;
	
	for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	image[i][j]=i+j+1;
	printf("%lu ",image[i][j]);
	}
	printf("\n");
	}
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	filter[i][j]=i+j+1;
	printf("%lu ",filter[i][j]);
	}
	printf("\n");
	}
	
	//sw-verison
	/*start = read_cycles();
	for(l=0;l<18;l++){
	for(k=0;k<18;k++){
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	psum = psum+image[i+k][j+l]*filter[i][j];
	}
	}
	printf("%llu ",psum);
	psum=0;
	}
	printf("\n");
	}
	end = read_cycles();
	printf("Took %lu cycles\n", end - start);
*/
	//hw-version
	start = read_cycles();
	for(l=0;l<3;l++){
	for(k=0;k<3;k++){
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	rocc_mul(2);
	rocc_load(0, &image[i+k][j+l]);
	rocc_load(1, &filter[i][j]);
	rocc_mul(2);
	rocc_mul(2);
	//rocc_write(3, 0);
	psum = psum+rocc_read(2);
	}
	}
	printf("%llu ",psum);
	psum=0;
	}
	printf("\n");
	}
	end = read_cycles();
	printf("Took %lu cycles\n", end - start);
	
	return 0;
}
