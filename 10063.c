#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int max;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if(b > a){
        if(b > c){
            max = b;
        }else{
            max = c;
        }
    }else if(c > a){
        max = c;
    }
    printf("%d", max);
    
}