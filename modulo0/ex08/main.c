#include <stdio.h> 

int main(void){

    printf("Por favor insira um número: ");

    char x [10];
    scanf("%s", x);

    printf("\nO número é %d.%d\n", integer_part(x), fractional_part(x));

    return 0;
}