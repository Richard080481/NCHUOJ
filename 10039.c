#include <stdio.h>

int plus(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    while(sum > 9){
        sum = plus(sum);
    }
    return sum;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", plus(num));
}