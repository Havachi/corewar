#include "corewar.h"

void	usage()
{
	printf("Usage: PROG_NAME <file>\n");
	exit(1);
}
uint8_t	*load_file(char *filename)
{
	FILE		*f;
	uint8_t		*code;
	struct stat	st;
	
	code = NULL;
	f = fopen(filename, "r");
	if(f)
	{
		fstat(fileno(f), &st);
		code = (uint8_t *)malloc(st.st_size);
		fread((void *)code, 1, st.st_size, f);		
	} 
	else
	{
		fprintf(stderr, "ERROR: Cannot open file %s\n", filename);
		usage();
	}
	return (code);
}
int main(int ac, char **av)
{
	printf("Booting up...\n");
	if (ac != 2)
	{
		usage();
	}
	
	uint8_t	*code;
	uint8_t *ip;
	STACK data;
	instruction ops[256];
	int i;

	for (i = 0; i < 256; i++)
	{
		ops[i] = op_nop;
	}
	ops['c'] = op_push_char;
	ops['e'] = op_emit;
	code = load_file(av[1]);
	data = stack_new(1024);
	ip = code;
	while (*ip != 'h')
	{
		ip = ops[*ip](ip, &data);
	}
	(void)code;
	printf("Shutting down...\n");
	return (0);
}
