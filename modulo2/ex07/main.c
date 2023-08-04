#include <stdio.h>
#include "asm.h"


short s1 = 0;
short s2 = 1;

int main(){

    short result = crossSumByte();
    printf("Resultado: %hu\n",result);

    return 0;
}