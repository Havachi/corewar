#include "instruction.h"
void	fetch_ops(instruction *ops)
{
	int	i;
	
	i = 0;
	while (i < 256)
	{
		ops[i] = op_nop;
		i++;
	}
	ops[OP_PUSH_CHAR] = op_push_char;
	ops[OP_EMIT] = op_emit;
	ops[OP_ADD] = op_add;
}

uint8_t *op_nop(uint8_t *ip, STACK *s)
{
	if(s->size == 1)	
		return (ip + 1);
	return (ip + 1);
}

uint8_t	*op_push_char(uint8_t *ip, STACK *s)
{
	OBJECT o;
	
	o.type = 'c';
	o.u8 = *(ip + 1);
	stack_push(s, o);
	return (ip + 2);
}

uint8_t *op_emit(uint8_t *ip, STACK *s)
{
	OBJECT o;
	
	o = stack_pop(s);
	hv_putchar(o.u8);
	return (ip + 1);
}

uint8_t *op_add(uint8_t *ip, STACK *s)
{
	OBJECT o1;
	OBJECT o2;
	int i;
	
	i= 0;
	o1.type = 'i';
	o2.type = 'i';
	while (i < 4)
	{
		o1.i32 += *(ip + 1 + i);
		o2.i32 += *(ip + 4 + 1 + i);
	}
	o1.i32 += o2.i32;
	stack_push(s, o1);
	return (ip + 8);	
}
