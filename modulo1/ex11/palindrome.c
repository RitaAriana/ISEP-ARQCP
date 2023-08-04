
int palindrome(char *str){
    int lenght=0;
    
    for(int i=0;*(str+i) != '\0';i++){
        lenght++;
    }

    char aux [lenght];
    for(int i=0;i<=lenght;i++){
        *(aux+i)='\0';
    }

    int j=0;
    for(int i=0;i<lenght;i++){
        if ((*(str+i) >= 'A' && *(str+i) <= 'Z') || (*(str+i) >= 'a' && *(str+i) <= 'z') || (*(str+i) >= '0' && *(str+i) <= '9')){
            *(aux+j)=*(str+i);
            j++;
        }
    }

    int temp=0;
    for(int l=0;*(aux+l) != '\0';l++){
        temp++;
    }
    
    int h=temp-1;

    for(int i=0;i<temp;i++){
        if(*(aux+i) >= 65 + 32 && *(aux+i) <= 90 + 32) { 
            *(aux+i) = *(aux+i) - 32;
        }
    }

    for(int m=0;m<=temp;m++){
        if(temp>0){
            if(*(aux+m) == *(aux+h)){
            h--;
            } else {
            return 0;
            }
        } else {
            return 0;
        }

    }

    return 1;
}