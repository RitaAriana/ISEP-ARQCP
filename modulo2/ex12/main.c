#include <stdio.h>
#include "asm.h"

int A = 10, B = 5;

int main(){

    char result = isMultiple();
    printf("Resultado: %c\n", result);

    return 0;
}