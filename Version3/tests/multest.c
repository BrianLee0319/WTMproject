#include "rocc.h"
#include "stdio.h"

static inline void accum_write(int idx, long int data)
{
	ROCC_INSTRUCTION_SS(0, data, idx, 0);
}

static inline long int accum_read(int idx)
{
	long int value;
	ROCC_INSTRUCTION_DSS(0, value, 0, idx, 1);
	return value;
}

static inline void accum_load(int idx, void *ptr)
{
	asm volatile ("fence");
	ROCC_INSTRUCTION_SS(0, (uintptr_t) ptr, idx, 2);
}

static inline void accum_add(int idx, unsigned long addend)
{
	ROCC_INSTRUCTION_SS(0, addend, idx, 3);
}

unsigned long read_cycles(void)
{
    unsigned long cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

long int data = 240518168602L,data1 = 188978561098L;

int main(void)
{
	long int a,b;
	long long int resulthi,resultlo;
	unsigned long start, end;
    	
	accum_load(0, &data);
	accum_load(1, &data1);
	//start = read_cycles();
	accum_add(2, 0);
	//end = read_cycles();
	a = accum_read(0);
	b = accum_read(1);
	printf("data = %ld\n", data);
	printf("a = %ld\n", a);
	printf("data = %ld\n", data1);
	printf("b = %ld\n", b);	
	resulthi = accum_read(3);
	resultlo = accum_read(2);
	printf("a * b = %lld,%lld\n", resultlo,resulthi);
	//start = read_cycles();
	resultlo = data * data1;
	//end = read_cycles();
	printf("Answer = %lld\n" , resultlo);
    	//printf("Took %lu cycles\n", end - start);
	/*if (result != data + 2)
		return 1;
	
	a = accum_read(0);
	b = accum_read(1);
	printf("a = 0x%lx\n", a);
	printf("b = 0x%lx\n", b);	

	accum_write(0, 3);
	accum_add(0, 1);
	result = accum_read(0);

	if (result != 4)
		return 2;
*/
	return 0;
}
