#include "rocc.h"
#include "stdio.h"

static inline void accum_write(int idx, unsigned long data)
{
	ROCC_INSTRUCTION_SS(0, data, idx, 0);
}

static inline unsigned long accum_read(int idx)
{
	unsigned long value;
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

unsigned long data = 123456L,data1 = 456789L;

int main(void)
{
	unsigned long a,b;
	unsigned long long result;
	
	accum_load(0, &data);
	accum_load(1, &data1);
	accum_add(2, 0);
	a = accum_read(0);
	b = accum_read(1);
	printf("data = %lu\n", data);
	printf("a = %lu\n", a);
	printf("data = %lu\n", data1);
	printf("b = %lu\n", b);	
	result = accum_read(2);
	printf("a * b = %llu\n", result);
	result = data * data1;
	printf("Answer = %llu\n" , result);
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
