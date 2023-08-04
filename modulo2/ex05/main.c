#include <stdio.h>
#include "asm.h"

short s = 256;

int main(){
    short result = swapBytes();

    printf("Valor original da variável: %hu\n",s);
    printf("Novo valor da variável: %hu\n",result);

    return 0;
}