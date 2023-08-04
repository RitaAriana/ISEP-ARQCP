#include <stdio.h>
#include "array_sort2.h"

int main(){

    int vec [] = {5,4,3,2,1,0};
    int n = 6;

    array_sort2(vec, n);

    for(int i = 0; i<n; i++){
        printf("%d\n", vec[i]);
    }

    return 0;
}