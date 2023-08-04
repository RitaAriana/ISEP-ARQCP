#include <stdio.h>
#include "asm.h"

int main(){

    int num = 133;
    int *ptr = &num
   
    int resultado = activate_2bits(ptr, 5);

    printf("Resultado: %d\n", resultado);

    return 0;
}