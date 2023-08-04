int odd_sum(int *p){
    int numDigitos = *p;
    int somaTotal = 0;

    for(int i = 0; i< numDigitos; i++){
        p++;
        if((*p % 2) != 0)
            somaTotal += *p;
    }

    return somaTotal;
}