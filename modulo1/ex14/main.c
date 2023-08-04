#include <stdio.h>
#include "frequencies.h"

int main(){

    int n = 10;
    float grades [] = {20,10,10,10,10,10,10,10,10,10};
    int freq [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


    frequencies(grades, n, freq);

    for(int i = 0; i<= 20; i++){
        printf("%d\n", freq[i]);
    }

    return 0;
}