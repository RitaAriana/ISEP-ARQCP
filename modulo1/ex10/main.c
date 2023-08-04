#include <stdio.h>
#include "odd_sum.h"

int main(){
    
    int p [] = {5, 1, 2, 3, 5, 7};

    int resultado = odd_sum(p);

    printf("%d\n", resultado);

    return 0;
}