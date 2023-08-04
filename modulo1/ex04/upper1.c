void upper1(char *str){
    int index = 0;
    
    while(str[index] != '\0'){
        if(str[index] >= 65 + 32 && str[index] <= 90 + 32)
            str[index] -= 32;

        index++;

    }
        
}