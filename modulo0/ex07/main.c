#include <stdio.h>

int main(){

    printf("Insira uma frase e o algoritmo indicará quantos espaços tem.\n");
    
    char frase [50];
    scanf("%[^\n]s", frase);



    printf("\nA frase tem %d palavras.\n", count_words(frase));

    return 0;
}