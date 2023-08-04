#include <stdio.h>
#include "copy_vec.h"

int main(){

    int n = 5;
    int vec1 [] = {17,23,1,5,7};
    int vec2 [5]; 

    copy_vec(vec1, vec2, n);

    for(int i = 0; i<n; i++){
        printf("%d\n", vec2[i]);
    }

    return 0;
}