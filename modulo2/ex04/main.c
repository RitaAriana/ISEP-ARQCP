#include <stdio.h>
#include "asm.h"

int op1 = 3, op2 = 2;

int main(){
 
    long result = sum_v3();

    printf("The result of the sum is: %ld\n", result);

    return 0;
}