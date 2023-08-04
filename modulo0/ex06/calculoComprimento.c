int calculoComprimento(char input []){
    int comprimentoString = 0;

    while(input[comprimentoString] != '\0'){
        comprimentoString++;
    }

    return comprimentoString;
}