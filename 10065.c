#include <stdio.h>

int main(){
    int num;
    int sum = 0;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++){
        sum += arr[i] * (i+1);
    }
    printf("%d", sum);
    return 0;
}