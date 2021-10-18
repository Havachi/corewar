#ifndef STACK_H
# define STACK_H
# include "object.h"
# include <unistd.h>
# include <stdlib.h>
typedef struct STACK_t 
{
	int	top;
	int	size;
	OBJECT	*stack;
} STACK;

STACK stack_new(int size);
int stack_push(STACK *s, OBJECT o);
OBJECT stack_pop(STACK *s);
OBJECT stack_peek(STACK *s);
#endif
