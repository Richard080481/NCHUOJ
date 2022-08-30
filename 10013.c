#include <stdio.h>

void main(){
    char str[5];
    for(int i = 0; i < 5; i++){
        scanf("%c", &str[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%c", str[i] ^ 0x26);
    }
} 