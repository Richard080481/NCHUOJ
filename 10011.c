#include <stdio.h>

void main(){
    int n;
    int count = 0;
    scanf("%d", &n);
    while(n > 0){
        if(n % 2 == 0){
            count++;
            n >>= 1;
        }else{
            printf("%d ", count);
            n >>= 1;
            count++;
        }
    }
}