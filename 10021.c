#include <stdio.h>

void main(){
    int n;
    char cmd;
    int count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n+1; i++){
        scanf("%c", &cmd);
        if(cmd == 'L'){
            count--;
        }else if (cmd == 'R')
        {
            count++;
        }
    }
    printf("%d", count);
}