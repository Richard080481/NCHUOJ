#include <stdio.h>

void main(){
    unsigned int n;
    char opp[33];
    scanf("%x", &n);
    for(int i = 0; i < 32; i++){
        if(n % 2 != 0){
            opp[i] = '*';
            n >>=1;
        }else{
            opp[i] = '-';
            n >>=1;
        }
    }
    for(int i = 31; i >= 0; i--){
        printf("%c", opp[i]);
    }
}