#include <stdio.h>
#include "asm.h"

short s = 256;
char byte1 = 34;
char byte2 = 35;

int main(){
    short result = concatBytes();

    printf("Valor original das variáveis: %hu %hu\n",byte1, byte2);
    printf("Novo valor da variável: %hu\n",result);

    return 0;
}