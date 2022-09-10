#include <stdio.h>
#include <string.h>

int multiplie(char str[]){
    for(int i = 0; i < strlen(str); i++){
        str[i] -= 64;
    }
    int sum = str[0];
    for(int i = 1; i < strlen(str); i++){
        sum *= str[i];
    }
    return sum;
}

int main(){
    char str1[7];
    char str2[7];
    scanf("%s%s", str1, str2);
    if((multiplie(str1) % 47) == (multiplie(str2) % 47)){
        printf("GO\n");
    }else{
        printf("STAY\n");
    }
    return 0;
}