char* find_word(char* initial_addr, char* word){
    char *enderecoInicial;
    int existe=0;

    while(existe==0 && *(initial_addr) != '\0'){
        int valid=0;
        if(*(word) == *(initial_addr)){

            int aux=0;
            while(*(word+aux) != '\0'){
                if(*(word+aux) == *(initial_addr+aux)){
                    existe=1;
                } else {
                    existe=0;
                    valid++;
                }
                aux++;
            }
        }
        if ( valid !=0){
            existe=0;
        }
        if(existe == 1){
            enderecoInicial = initial_addr;
        }
        initial_addr++;
    }

    
    return enderecoInicial;
}