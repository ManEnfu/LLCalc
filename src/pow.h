#ifndef POW_H
#define POW_H 1

#include "macros.h"
#include "mult.h"
#include "leq.h"

#define pow(dest, b, p, label1, label2) \
    zero(dest); \
    inc(dest); \
    neg(p); \
    if (isz(p)) goto label2; \
    label1: \
    mult(dest, b); \
    inc(p); \
    if (!isz(p)) goto label1; \
    label2:

#endif

