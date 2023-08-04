#include <stdio.h>

void find_all_words(char* str, char* word, char** addrs){
    int existe = 0;
    int index = 0;
    
    while(existe==0 && *(str) != '\0'){
        int valid=0;
        if(*(word) == *(str)){

            int aux=0;
            while(*(word+aux) != '\0'){
                if(*(word+aux) == *(str+aux)){
                    existe=1;
                } else {
                    existe=0;
                    valid++;
                }
                aux++;
            }
        }
        if (valid !=0){
            existe=0;
        }
        if(existe == 1){
            (*(addrs + index)) = str;
            index++;
            existe = 0;
            valid = 0;            
        }
        str++;
    }

    if(index != 0){
        printf("A palavra pretendida encontra-se nos seguintes endereços:\n");
        for(int i = 0; i<index; i++)
            printf("%p\n", *(addrs+i));
    }
}