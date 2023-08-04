#include <stdio.h>
#include "asm.h"
#define MAX_SIZE 10

int num = MAX_SIZE;
long arrayLong[MAX_SIZE];
long *ptrvec = arrayLong;

int main(){

    arrayLong[0] = 2;
    arrayLong[1] = 2;

    vec_add_one();

    for(int i = 0; i< num; i++)
        printf("%ld\n", arrayLong[i]);
    
    return 0;
}