#include <stdio.h>
#include <math.h>

int power(int x, int n){
    x = pow(x, n);
    return x;
}

int main(){
    int num;
    int in;
    int sum =0;
    scanf("%d", &num);
    int mut[num];
    for(int i = 0; i < num; i++){
    scanf("%d", &mut[i]);
    }
    scanf("%d", &in);
    for(int i = 0; i < num; i++){
        sum += power(in, num-1-i) * mut[i];
    }
    printf("%d", sum);
    return 0;
}