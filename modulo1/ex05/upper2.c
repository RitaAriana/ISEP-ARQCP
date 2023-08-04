void upper2(char *str){

    while(*str != '\0'){
        if(*str >= 65 + 32 && *str <= 90 + 32) { 
            *str = *str - 32;
        }
        str++;
    }
}