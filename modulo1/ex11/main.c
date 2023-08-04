#include <stdio.h>
#include "palindrome.h"

int main(){

    char str [] = "Never odd or even";
    if(palindrome(str)==1){
        printf("É palíndrome!");
    } else {
        printf("Não é palíndrome!");
    }

    return 0;
}