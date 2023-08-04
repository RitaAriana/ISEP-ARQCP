#include <stdio.h>
#include "asm.h"

int main(){

    int a = 3;
    int varB = 5;
    int *b = &varB;
    int c = 8;

    int resultado = calc(a, b, c);

    printf("Resultado: %d\n", resultado);

    return 0;
}