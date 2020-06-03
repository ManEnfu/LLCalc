#ifndef MULT_H
#define MULT_H 1

#include "macros.h"

#define shr(dest) \
    dest.bit8 = dest.bit7; \
    dest.bit7 = dest.bit6; \
    dest.bit6 = dest.bit5; \
    dest.bit5 = dest.bit4; \
    dest.bit4 = dest.bit3; \
    dest.bit3 = dest.bit2; \
    dest.bit2 = dest.bit1; \
    dest.bit1 = 0; 

#define mult(dest, op1, op2) \
    zero(dest); \
    if (op2.bit8) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit7) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit6) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit5) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit4) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit3) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit2) { \
        add(dest, op1); \
    } \
    shr(dest); \
    if (op2.bit1) { \
        add(dest, op1); \
    }

#define div(dest, op1, op2) \
    zero(dest);

#endif
