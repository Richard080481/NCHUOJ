#include <stdio.h>

void main(){
    int m;
    scanf("%d", &m);
    if(m>0 && m%2 == 0 && (m<1000 || m>10000)){
        printf("1");
    }else{
        printf("0");
    }
}