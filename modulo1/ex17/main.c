#include <stdio.h>
#include "swap.h"

int main(){

    int vec1 []={1,2,3,4,9};
    int vec2 []={9,8,7,6,1};
    swap(vec1,vec2,5);
    for (int i=0;i<5;i++){
        printf("%d\n",*(vec1+i));
    }
    for (int i=0;i<5;i++){
        printf("%d\n",*(vec2+i));
    }
    return 0;
}