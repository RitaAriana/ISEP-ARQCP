#include <stdio.h>
#include "asm.h"

int op1=1, op2=3;

int main() {
    
    int result = sum_v2();

    printf("O resultado é %d\n", result);

    return 0;
}