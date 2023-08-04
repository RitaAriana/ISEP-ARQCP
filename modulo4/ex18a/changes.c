void changes(int *ptr){
    int maskA = 0;

    for(int i = 20; i < 24; i++){
        maskA += (1 << i);
    }

    int resultingBits = *ptr & maskA;
    resultingBits = resultingBits >> 20;

    if(resultingBits > 7)
        *ptr = *ptr ^ maskA;
}
