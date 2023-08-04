#include <stdio.h>
#include "asm.h"

int counter = 1;

int main(){

    int result = summation();
    printf("Resultado: %d\n", result);

    return 0;
}