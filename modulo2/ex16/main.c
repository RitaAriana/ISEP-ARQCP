#include "stdio.h"
#include "asm.h"

long num = -1000;

int main(){

    int result = steps();
    printf("Resultado: %d\n", result);

    return 0;
}