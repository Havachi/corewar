/*
* OPS AVAILABLE
* 0x00 OP_NOP
* 0x01 OP_PUSH_CHAR
* 0x02 OP_EMIT
* ...
* 0xFF HALT
*/
#ifndef OPS_H
# define OPS_H
# ifndef INSTRUCTION_H
#  include "instruction.h"
# endif
# define OP_NOP 0x00
# define OP_PUSH_CHAR 0x01
# define OP_EMIT 0x02
# define OP_ADD 0x03
# define OP_HALT 0xFF
#endif
