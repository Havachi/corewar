enum 
{
        R_R0 = 0,
        R_R1 = 1,
        R_R2 = 2,
        R_R3 = 3,
        R_R4 = 4,
        R_R5 = 5,
        R_R6 = 6,
        R_R7 = 7,
        R_PC = 8,
        R_COND = 9,
        R_COUNT = 10
};
enum
{
        OP_BR = 0,
        OP_ADD = 1,
        OP_LD = 2,
        OP_ST = 3,
        OP_JSR = 4,
        OP_AND = 5,
        OP_LDR = 6,
        OP_STR = 7,
        OP_RTI = 8,
        OP_NOT = 9,
        OP_LDI = 10,
        OP_JMP = 11,
        OP_RES = 12,
        OP_LEA = 13,
        OP_TRAP = 14,
};
enum
{
        FL_POS = 1 << 0,
        FL_ZRO = 1 << 1,
        FL_NEG = 1 << 2
};
enum
{
	MR_KBSR = 0xFE00,
	MR_KBDR = 0xFE02
};
