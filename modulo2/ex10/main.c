#include <stdio.h>
#include "asm.h"

int op1 = 5, op2 = 10;

int main(){

    long long result = sum2ints();
    printf("Resultado: %d\n", result);

    return 0;
}