#include <stdio.h>
#include "asm.h"
#define MAX_SIZE 3

short *ptrvec;
int num = MAX_SIZE;

int main(){

    short array[MAX_SIZE] = {0, 1, 2};
    ptrvec = array;

    unsigned char numUpdates = vec_zero();

    printf("%d\n", ptrvec);
      
    
    return 0;
}