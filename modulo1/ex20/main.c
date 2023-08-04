#include <stdio.h>
#include "find_all_words.h"
#define MAX_OCORRENCIAS 5

int main(){

    char str [] = "O Joao gosta de ir a praia.";

    char word [] = "gosta";

    char *addrs[MAX_OCORRENCIAS];
    
    find_all_words(str, word, addrs);

    return 0;
}