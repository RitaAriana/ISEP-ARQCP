#include <stdio.h>
#include "activate_bit.h"

int main(){

    int numero = 133;
    int *ptr = &numero;

    int resultado = activate_bit(ptr, 5);

    printf("Resultado: %d\n", resultado);

    return 0;
}