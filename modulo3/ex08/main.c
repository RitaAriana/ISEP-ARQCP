#include <stdio.h>
#include "asm.h"
#define MAX_SIZE 2

long even = 7;
int num = MAX_SIZE;
int *ptrvec;

int main(){

    int arrayLong[MAX_SIZE] = {3,2};
    ptrvec = arrayLong;
    int result = test_even();
    int result2 = vec_sum_even();

    printf("%d\n", result);
    printf("%d\n", result2);
    return 0;
}