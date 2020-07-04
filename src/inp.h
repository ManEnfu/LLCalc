#ifndef INP_H
#define INP_H 1

#include "macros.h"
#include "mult.h"

#define inp(c, reg) \
    switch(c) { \
        case '0': \
            mult10(reg); \
            break; \
        case '1': \
            mult10(reg); \
            inc(reg); \
            break; \
        case '2': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '3': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '4': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '5': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '6': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '7': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '8': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
        case '9': \
            mult10(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            inc(reg); \
            break; \
    } 

#endif
