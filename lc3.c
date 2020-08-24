#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

uint16_t memory[UINT16_MAX];
uint16_t reg[R_COUNT];

/* Registers */
enum {
    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,
    R_COND,
    R_COUNT
};

/* Opcodes */
enum {
    OP_BR = 0,
    OP_ADD,
    OP_LD,
    OP_ST,
    OP_JSR,
    OP_AND,
    OP_LDR,
    OP_STR,
    OP_RTI,
    OP_NOT,
    OP_LDI,
    OP_STI,
    OP_JMP,
    OP_RES,
    OP_LEA,
    OP_TRAP
};

/* Condition Flags*/
enum {
    FL_POS = 1 << 0,
    FL_ZRO = 1 << 1,
    FL_NEG = 1 << 2
};


int main(int argc, const char* argv[]) {
    /* { LOAD ARGUMENTS } */
    /* { SETUP } */

    /* set the PC to starting pos */
    /* 0x3000 is the default */
    enum { PC_START = 0x3000 };
    reg[R_PC] = PC_START;

    int running = 1;
    while (running) {
        /* FETCH */
        uint16_t instr = mem_read(reg[R_PC]++);
        uint16_t op = instr >> 12;

        switch (op) {
            case OP_ADD:
                /* ADD */
                break;
            case OP_AND:
                /* AND */
                break;
            case OP_NOT:
                /* NOT */
                break;
            case OP_BR:
                /* BR */
                break;
            case OP_JMP:
                /* JMP */
                break;
            case OP_JSR:
                /* JSR */
                break;
            case OP_LD:
                /* LD */
                break;
            case OP_LDI:
                /* LDI */
                break;
            case OP_LDR:
                /* LDR */
                break;
            case OP_LEA:
                /* LEA */
                break;
            case OP_ST:
                /* ST */
                break;
            case OP_STI:
                /* STI */
                break;
            case OP_STR:
                /* STR */
                break;
            case OP_TRAP:
                /* TRAP */
                break;
            case OP_RES:
            case OP_RTI:
            default:
                /* BAD OPCODE*/
                break;
        }
    }
    /* SHUTDOWN */
}