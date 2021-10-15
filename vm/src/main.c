#include "corewar.h"

int main(int ac, char **av)
{
	int running;
	int ret;
	
	running = 1;
	ret = process_args(ac, av);
	if(ret != SIG_OK)
	{
		__return(ret);
	}
	while (running)
	{
		
	//	uint16_t instr = mem_read(reg[R_PC]++);
	//	uint16_t op = instr >> 12;
		uint16_t op = 1;
		switch (op)
		{
			case OP_BR:
				break;
			case OP_ADD:
				break;
			case OP_LD:
				break;
			case OP_ST:
				break;
			case OP_JSR:
				break;
			case OP_AND:
				break;
			case OP_LDR:
				break;
			case OP_STR:
				break;
			case OP_RTI:
				break;
			case OP_NOT:
				break;
			case OP_LDI:
				break;
			case OP_JMP:
				break;
			case OP_RES:
				break;
			case OP_LEA:
				break;
			case OP_TRAP:
				break;
			default:
				break;
		}	
	}
	__return(SIG_OK);
}
void __return (int value)
{
	
	if(value == 3)
	{
		fprintf(stderr, "%s [options]\n", PROG_NAME);	
		
	}
	fprintf(stdout, "Return with code (%d)", (int)value);
	exit (value);
}
