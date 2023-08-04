int integer_part(char x []){
    int dot = dotLocation(x);

    int numeroFinal = 0;

    for(int i = 0; i<dot; i++)
        numeroFinal = numeroFinal * 10 + x[i] - '0';
    
    return numeroFinal;
}