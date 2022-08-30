#include <stdio.h>
#include <string.h>

void main(){
    char str[10];
    int de[10];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        de[i] = str[i] - '0';
    }
    for(int i = strlen(str)-1; i >= 0; i-- ){
        printf("%d", de[i]);
    }
}