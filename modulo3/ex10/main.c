#include <stdio.h>
#include "asm.h"
#define MAX_SIZE 40

char *ptr1;
char *ptr2;
char *ptr3;

int main(){

    char string1[MAX_SIZE];
    char string2[MAX_SIZE];
    char string3[(2*MAX_SIZE)];

    ptr1 = string1;
    ptr2 = string2;

    str_cat();

    printf("%d\n", ptr3);
    
    return 0;
}