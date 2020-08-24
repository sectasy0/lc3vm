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
