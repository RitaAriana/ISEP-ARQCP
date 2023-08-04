#include "stdio.h"
#include "asm.h"

int A = 3000, B = -5000, C = 8000, D = 70;

int main(){

    int result = compute();
    printf("Resultado: %d", result);

    return 0;
}