#include <stdio.h>
#include "compress_shorts.h"

int main(){

    short shorts [] = {2,4,5,6};
    int n_shorts = 4;
    int integers [n_shorts];

    compress_shorts(shorts, n_shorts, integers);

    for(int i = 0; i < 2; i++){
        printf("%d\n", *(integers+i));
    }

    return 0;
}