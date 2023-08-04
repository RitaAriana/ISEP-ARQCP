int count_words(char frase []){
    int indiceFim = stringEnd(frase);

    int numEspacos = 0;

    for(int i = 0; i < indiceFim; i++){
        if(frase[i] == ' ' && (frase[i+1] != '\0' && frase[i+1] != ' ')){
            numEspacos++;
        }
    }
    
    return numEspacos+1;
}