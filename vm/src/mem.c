#include "mem.h"
uint16_t	mem_write(uint16_t address, uint16_t val)
{
	memory[address] = val;
}

uint16_t	mem_read(uint16_t reg);
{
	if (address == MR_KBSR)
	{
		if (check_key())
		{
			memory[MR_KBSR] = (1 << 15);
			memory[MR_KBSR] = getchar();
		}
		else
		{
			memory[MR_KBSR] = 0;
		}
	}
	return (memory[address]);
}

