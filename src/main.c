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

reg reg1; // final result
reg reg2; // acc
reg reg3;
reg reg4;


int main (int args, char* argv[]) {
    
    /*
    FILE *file = fopen(argv[1], "r");
    char c;

    if (file == NULL) {
        printf("File not found!\n");
        exit(1);
    }

    while ((c = fgetc(file)) != EOF) {

        
    
    }
    */

    reg1.bit1 = 0;
    reg1.bit2 = 0;
    reg1.bit3 = 0;
    reg1.bit4 = 0;
    reg1.bit5 = 0;
    reg1.bit6 = 0;
    reg1.bit7 = 0;
    reg1.bit8 = 0;

    int i = 0;
    for (i = 0; i < 5; i++) {
        inc(reg1);
    }
    for (i = 0; i < 12; i++) {
        inc(reg2);
    }
    mult(reg3, reg1, reg2);
    dispr(reg3);
    return 0;

}
