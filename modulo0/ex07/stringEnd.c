int stringEnd(char frase []){
    int tamanhoString = 0;

    while(frase[tamanhoString] != '\0'){
        tamanhoString++;
    }

    return tamanhoString;
}