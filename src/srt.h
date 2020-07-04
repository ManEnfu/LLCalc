#ifndef SRT_H
#define SRT_H 1

#include "macros.h"
#include "leq.h"
#include "mult.h"

#define is16(reg) \
    (!reg.bit1 && !reg.bit2 && !reg.bit3 && !reg.bit4 && reg.bit5 && !reg.bit6 && !reg.bit7 && !reg.bit8)

#define srt(dest, src, temp, label1) \
    zero(dest); \
    zero(temp); \
    label1: \
    inc(dest); \
    mov(temp, dest); \
    mult(temp, dest); \
    if (leq(temp, src) && !is16(dest)) goto label1; \
    neg(dest); \
    inc(dest); \
    neg(dest); \
    printf("\r          ");

    

#endif
