#ifndef MEM_H
# define MEM_H
# include <stdint.h>
enum
{
	PC_START = 0x3000
};
void		mem_write(uint16_t address, uint16_t val);
uint16_t	mem_read(int reg);
#endif
