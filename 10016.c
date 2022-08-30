#include <stdio.h>

    int main(){
        int n;
        int x = 0;
        scanf("%d", &n);
        if(n <= 0){
            x = -100;
            printf("%d", x);
            return 0;    
        }
        if(n % 3 ==0){
            x += 3;
        }
        if(n % 5 ==0){
            x += 5;
        }
        if(n >= 100 && n <= 200){
            x += 50;
        }else{
            x -= 50;
        }
        printf("%d", x);
        return 0;
    }