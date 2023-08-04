#include <stdio.h>
#include "asm.h"

int num = 0;

int main(void){

    char result = check_num();

    printf("The result is: %c\n", result);

    return 0;
}