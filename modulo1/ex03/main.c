#include <stdio.h>
#include "sum_even.h"

int main(){

    int vec[5]={1,2,3,4,5};
    int *p=vec;
    int result = sum_even(p,5);
    printf("%d\n",result);
    return 0;
}