#ifndef INSTRUCTION_H
# define INSTRUCTION_H
# include <stdint.h>
# include "stack.h"
# include "utils.h"
typedef uint8_t	*(*instruction)(uint8_t *, STACK *);
uint8_t	*op_nop(uint8_t *ip, STACK *s);
uint8_t *op_push_char(uint8_t *ip, STACK *s);
uint8_t *op_emit(uint8_t *ip, STACK *s);
#endif
