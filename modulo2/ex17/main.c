#include <stdio.h>
#include "asm.h"

int num1 = 20;
int num2 = 2;
int main(){
    int som, sub, mult, div, p2, p3;
    som = sum();
    printf("%d + %d = %d\n",num1, num2, som);
    
    sub = subtraction();
    printf("%d - %d = %d\n",num1, num2, sub);

    mult = multiplication();
    printf("%d * %d = %d\n",num1, num2, mult);   
            
    div = division();
    printf("%d / %d = %d\n",num1, num2, div);        
            
    p2 = power2();
    printf("%d ^2 = %d\n",num1, p2);

    p3 = power3();
    printf("%d ^3 = %d\n",num1, p3);
    

    return 0;
}