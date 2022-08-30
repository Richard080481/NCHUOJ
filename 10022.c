#include <stdio.h>
#include <string.h>
void main(){
    char n = 0;
    char str[20];
    int chi = 0;
    int oh = 0;
    scanf("%s", str);
    for(int i = 0; i <strlen(str) ; i+=2){
        chi += str[i] - '0';
    }
    for(int i = 1; i <strlen(str); i+=2){
        oh += str[i] - '0';
    }
    printf("%d", oh - chi);   
}