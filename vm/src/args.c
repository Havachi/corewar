#include "sig.h"
#include "args.h"
#include <stdio.h>
int process_args(int ac, char **av)
{
	(void)av;
	if (ac < 2)
	{
		return(SIG_INVAV);
	}	
	parse_args(ac, av);
	return (SIG_OK);
}
void parse_args(int ac, char **av)
{
	int i;
	int j;
	int type;
	
	i = 0;
	j = 0;
	type = 0;
	while (i < ac)
	{
		if(av)
		{
			if(av[i])
			{
				while(av[i][j])
				{
					if(av[i][j] == '-')
						type++;
					//switch letter which option
					//get = for -- option
				}	
			}
		}
		i++;
	}
}
