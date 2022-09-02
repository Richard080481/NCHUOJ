#include <stdio.h>

int myStrncmp(char str1[], char str2[], int n){
    for(int i = 0; i < n; i++){
        if(str1[i] != str2[i]){
            return str1[i] - str2[i];
        }
    }
    return 0;
}

int isValid(char str[], int stride, int stringlen){
    for(int i = stride; i < stringlen; i += stride){
        if(myStrncmp(&str[0], &str[i], stride) != 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int stringlen;
    int stride;
    scanf("%d", &stringlen);
    char str[stringlen+1];
    scanf("%s", str);
    for(stride = 1; stride <= stringlen; stride++){
        if(stringlen % stride == 0){
            if(isValid(str, stride, stringlen)) {break;}
        }
    }
    printf("%.*s", stride, str);
    return 0;
}