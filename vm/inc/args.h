#ifndef ARGS_H
# define ARGS_H

typedef struct arglist
{
	char *type;
	char *value;
	void *next;	
}arglist;

int process_args(int ac, char **av);
void parse_args(int ac, char **av);
#endif
