#ifndef SRT_H
#define SRT_H 1

#include "macros.h"
#include "leq.h"
#include "mult.h"

#define srt(dest, src, temp, label1) \
    zero(dest); \
    zero(temp); \
    inc(dest); \
    label1: \
    mov(temp, dest); \
    mult(temp, dest); \
    inc(dest); \
    if (leq(temp, src)) goto label1; \
    neg(dest); \
    inc(dest); \
    inc(dest); \
    neg(dest); \

    

#endif
