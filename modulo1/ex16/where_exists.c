char* where_exists(char* str1, char* str2){
    char* pointToBeginning;
    int existsInside = 0;

    if(*str1 != '\0' && *str2 != '\0'){
        
        while(*str2 != '\0' && existsInside == 0){

            if(*str2 == *str1){
                
                int index = 0;
                while(*(str1 + index) != '\0'){
                    if(*(str2 + index) == *(str1 + index))
                        existsInside = 1;
                    else
                        existsInside = 0;

                    index++;
                }
            }
            if(existsInside == 1)
                pointToBeginning = str2;
            str2++;
        }

    }

    return pointToBeginning;
}