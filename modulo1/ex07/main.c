#include <stdio.h>
#include "array_sort1.h"

int main(){

    int vec[] = {1,2,5,4,3,6};
    array_sort1(vec,6);
    
    for (int i=0; i<6; i++){
        printf("%d\n",vec[i]);
    }

    return 0; 
}