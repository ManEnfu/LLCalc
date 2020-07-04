#ifndef DIV_H
#define DIV_H 1

#include "macros.h"

#define div(dest, num, den, label1, label2) \
    zero(dest); \
    if (!leq(den, num)) goto label2; \
    label1: \
    sub(num, den); \
    inc(dest); \
    if (leq(den, num)) goto label1; \
    label2:

#endif
