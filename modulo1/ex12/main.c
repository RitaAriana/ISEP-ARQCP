#include <stdio.h>
#include "capitalize.h"

int main(){

    char str [] = "a eduarda tem um cão.";

    capitalize(str);

    printf("%s\n", str);

    return 0;
}