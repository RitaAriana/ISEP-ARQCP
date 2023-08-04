void capitalize (char *str){
    if(*str >= 97 && *str <= 122)
        *str -= 32;

    while(*str != '\0'){
        if(*(str-1) == ' ' && (*str >= 97 && *str <= 122))
            *str -= 32;
        str++;
    }
}