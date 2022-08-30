#include <stdio.h>

    void main(){
        char enpw[6];
        for(int i = 0; i < 6; i++){
            scanf("%c", &enpw[i]);
        }
        for(int i = 1; i < 6; i++){
            if(enpw[i] - enpw[i-1] > 0){
                printf("%d", enpw[i] - enpw[i-1]);
            }else{
                printf("%d", enpw[i-1] - enpw[i]);
            }
        }
    }