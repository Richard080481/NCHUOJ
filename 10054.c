#include <stdio.h>

int main(){
    int num;
    int theSmallest = __INT_MAX__;
    int sum = 0;
    scanf("%d", &num);
    int candyCan[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &candyCan[i]);
        theSmallest = theSmallest > candyCan[i] ? candyCan[i] : theSmallest;
    }
    for(int i = 0; i < num; i++){
         sum += candyCan[i] -= theSmallest;
    }
    printf("%d\n", sum);
}