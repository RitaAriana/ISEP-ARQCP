#include "stdio.h"
#include "asm.h"

int C = 5000;
int D = -5000;
short B = 1;
char A = -1;

int main(){

    long result = sum_and_subtract();
    printf("Resultado: %llu\n",result);

    return 0;
}