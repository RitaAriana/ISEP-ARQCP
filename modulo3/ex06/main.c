#include <stdio.h>
#include "asm.h"

char ptr [] = {"abb"};
char *ptr1 = ptr;

int main(){

    int numberOfChanges = encrypt();

    printf("%d\n", numberOfChanges);
    return 0;
}