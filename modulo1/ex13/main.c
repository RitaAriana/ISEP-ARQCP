#include <stdio.h>
#include "where_is.h"

int main(){

    char str [] = "Teste";
    int aux [5];
    int temp = where_is(str,'e',aux);
    for (int i=0;i<temp;i++){
        printf("%d\n",*(aux+i));
    }

    return 0;
}