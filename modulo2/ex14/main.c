#include "stdio.h"
#include "asm.h"

int base = 5000;
int height = 5000;

int main(){

    int result = getArea();
    printf("Área do Triângulo: %d\n", result);

    return 0;
}