#include <stdio.h>
#include "sort_without_reps.h"

int main(){

    int vec[]={1,4,3,2,2,6,5,6};
    int aux[8];
    int size=sort_without_reps(vec,8,aux);
    for(int i=0;i<size;i++){
        printf("%d\n",*(aux+i));
    }

    return 0;
}