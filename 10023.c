#include <stdio.h>

void main(){
    int n;
    int count = 0;
    int max = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if(n % 2 != 0){
            count ++;
            n >>=1;
            continue;
        }else if(max<=count){
            max = count;
        }
        count = 0;
        n >>= 1;
    }
    printf("%d", max);
}