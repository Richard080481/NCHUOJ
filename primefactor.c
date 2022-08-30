#include<stdio.h>
int main(){
    int a;
    int b;
    int i = 2;
    scanf("%d", &a);
    while(1){
        b=0;
        if(a % i == 0){
            for(; a % i == 0;){
                a /= i;     // a = a / i
                b+=1;
            }
        }
        if(a == 1){
            break;
        }
        if(b == 0){
            i++;
            continue;
        }
        if(b>1){
            printf("%d^%d * ", i, b);
        }else{
            printf("%d * ", i);
        }
        i++;
    }
    if(b>1){
        printf("%d^%d", i, b);
    }else{
        printf("%d", i);
    }
    return 0;
}