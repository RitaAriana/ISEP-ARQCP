#include <stdio.h>
#include "asm.h"

char ptr1 [maxSize] = {"violetavoa"};
char ptr2 [maxSize];

int main(){

    str_copy_porto();

    printf("%s\n", ptr2);

    return 0;
}