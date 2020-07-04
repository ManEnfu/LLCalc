#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int bit1 : 1;
    unsigned int bit2 : 1;
    unsigned int bit3 : 1;
    unsigned int bit4 : 1;
    unsigned int bit5 : 1;
    unsigned int bit6 : 1;
    unsigned int bit7 : 1;
    unsigned int bit8 : 1;
} reg;

#include "dispr.h"
#include "macros.h"
#include "mult.h"
#include "pow.h"
#include "srt.h"
#include "div.h"
#include "mod.h"
#include "inp.h"

reg reg1; // first operand / final result
reg reg2; // second operand
reg reg3; // first operand / temp result value for power and square root
reg reg4; // temp used in calculation

#define isnum(c) \
    (c != EOF && c != '+' && c != '-' && c != '/' && c != '*' && c != '^' && c != 'r' && c != '%')

#define powprecedence(label1, label2, label3) \
    zero(reg3); \
    label1: \
    c = fgetc(file); \
    if (isnum(c)) { \
        inp(c, reg3); \
        goto label1; \
    } \
    mov(reg4, reg2); \
    pow(reg2, reg4, reg3, label2, label3);

#define srtprecedence(label1, label2) \
    zero(reg3); \
    label1: \
    c = fgetc(file); \
    if (isnum(c)) { \
        inp(c, reg3); \
        goto label1; \
    } \
    srt(reg2, reg3, reg4, label2);

int main (int args, char* argv[]) {
    
    
    FILE *file = fopen(argv[1], "r");
    char c;

    if (file == NULL) {
        printf("File not found!\n");
        exit(1);
    }

    zero(reg1);
    zero(reg2);
    zero(reg3);
    zero(reg4);

    while ((c = fgetc(file)) != EOF) {

        newchar:
        inp(c, reg1);

        if (c == '+') {
            zero(reg2);
            add1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto add1;
            }
            switch(c) {
                case '^':
                    powprecedence(ap1, ap2, ap3); 
                    goto jmpadd;
                case 'r':
                    srtprecedence(ar1, ar2);
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                jmpadd:
                    add(reg1, reg2);
                    goto newchar;
            }
        } else if (c == '-') {
            zero(reg2);
            sub1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto sub1;
            }
            switch(c) {
                case '^':
                    powprecedence(sp1, sp2, sp3); 
                    goto jmpsub;
                case 'r':
                    srtprecedence(sr1, sr2);
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                jmpsub:
                    sub(reg1, reg2);
                    goto newchar;
            }
        } else if (c == '*') {
            zero(reg2);
            mul1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto mul1;
            }
            switch(c) {
                case '^':
                    powprecedence(mp1, mp2, mp3); 
                    goto jmpmul;
                case 'r':
                    srtprecedence(mr1, mr2);
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                jmpmul:
                    mult(reg1, reg2);
                    goto newchar;
            }
        } else if (c == '/') {
            zero(reg2);
            div1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto div1;
            }
            switch(c) {
                case '^':
                    powprecedence(dp1, dp2, dp3); 
                    goto jmpdiv;
                case 'r':
                    srtprecedence(dr1, dr2);
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                jmpdiv:
                    mov(reg4, reg1);
                    div(reg1, reg4, reg2, divlabel1, divlabel2);
                    goto newchar;
            }
        } else if (c == '%') {
            zero(reg2);
            mod1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto mod1;
            }
            switch(c) {
                case '^':
                    powprecedence(mdp1, mdp2, mdp3); 
                    goto jmpmod;
                case 'r':
                    srtprecedence(mdr1, mdr2);
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                jmpmod:
                    mod(reg1, reg2, modlabel1, modlabel2);
                    goto newchar;
            }
        } else if (c == '^') {
            zero(reg2);
            pow1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto pow1;
            }
            switch(c) {
                case '^':
                case 'r':
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                    mov(reg4, reg1);
                    pow(reg1, reg4, reg2, powlabel1, powlabel2);
                    goto newchar;
            }
        } else if (c == 'r') {
            zero(reg2);
            srt1:
            c = fgetc(file);
            if (isnum(c)) {
                inp(c, reg2);
                goto srt1;
            }
            switch(c) {
                case '^':
                case 'r':
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case EOF:
                    srt(reg1, reg2, reg4, sqrtlabel1);
                    goto newchar;
            }
        }

    }
    

/*
    int i = 0;
    for (i = 0; i < 123; i++) {
        inc(reg1);
    }
    for (i = 0; i < 11; i++) {
        inc(reg2);
    }
    div(reg2, reg1, reg3, l1);
*/
    dispr(reg1);
    return 0;

}
