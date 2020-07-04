#ifndef MOD_H
#define MOD_H 1

#include "macros.h"

#define mod(dest, base, label1, label2) \
    if (!leq(base, dest)) goto label2; \
    label1: \
    sub(dest, base); \
    if (leq(base, dest)) goto label1; \
    label2: \
    printf("\r");

#endif
