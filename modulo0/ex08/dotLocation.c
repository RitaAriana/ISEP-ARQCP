int dotLocation(char x []){
    int numberCharacters = 0;

    while(x[numberCharacters] != '.'){
        numberCharacters++;
    }

    return numberCharacters;
}