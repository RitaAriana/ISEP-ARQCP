#include <stdio.h>
#include "asm.h"
#define MAX_SIZE 3

char *ptr1;
char *ptr2;
int num = MAX_SIZE;

int main(){

    char string1[MAX_SIZE];
    char string2[MAX_SIZE];

    ptr1 = string1;
    ptr2 = string2;

    swap();
    
    return 0;
}