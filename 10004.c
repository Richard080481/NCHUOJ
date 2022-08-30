#include <stdio.h>

void main(){
    int left;
    scanf("%d", &left);
    if(left >= 0){
        printf("%d %d", left/3, left%3);
    }else{
        printf("%d %d", left/3 - 1, (left/3 -1) * -3 + left);
    }
}