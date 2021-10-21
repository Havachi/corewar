#ifndef INSTRUCTION_H
# define INSTRUCTION_H
# include <stdint.h>
# include "stack.h"
# include "utils.h"
# include "ops.h"
typedef uint8_t	*(*instruction)(uint8_t *, STACK *);
void	fetch_ops(instruction *ops);
uint8_t	*op_nop(uint8_t *ip, STACK *s);
uint8_t *op_push_char(uint8_t *ip, STACK *s);
uint8_t *op_emit(uint8_t *ip, STACK *s);
uint8_t *op_add(uint8_t *ip, STACK *s);
#endif
