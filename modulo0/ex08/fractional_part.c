int fractional_part(char x []){
    int dot = (dotLocation(x) + 1);
    int numeroFinal = 0;
    
    while(x[dot] != '\0'){
        numeroFinal = numeroFinal * 10 + x[dot] - '0';
        dot++;
    }

    return numeroFinal;

}