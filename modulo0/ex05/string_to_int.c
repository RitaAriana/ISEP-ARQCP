int string_to_int(char input []){
    int comprimentoString = calculoComprimento(input);
    int numeroFinal = 0;

    for(int i = 0; i < comprimentoString; i++){
        numeroFinal = numeroFinal * 10 + input[i] - '0';
    }

    return numeroFinal;
}