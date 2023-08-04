#include <stdio.h>
#include "power_ref.h"

int main(){

    int x;
    int y;

    scanf("%d\n", &x);
    scanf("%d", &y);
        
    power_ref(&x, y);    

    printf("%d\n", x);
    
    return 0;
}