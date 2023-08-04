#include <stdio.h>

int calculoComprimento(char []);

int string_to_int(char []);

int main(void){

    printf("Por favor insira a sua String: ");
    char input [10];
    scanf("%s", input);
		
    printf("%d\n", string_to_int(input));

    return 0;

}	