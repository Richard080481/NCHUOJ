#include <stdio.h>

int main(){
    int num1;
    int num2;
    scanf("%d", &num1);
    int arr1[num1];
    for(int i = num1-1; i >= 0; i--){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &num2);
    int arr2[num2];
    for(int i = num2-1; i >= 0; i--){
        scanf("%d", &arr2[i]);
    }
    int ans[num1+num2-1];
    for(int i = 0; i < num1 + num2 - 1; i++){
        ans[i] = 0;
    }
    for(int n = num1-1; n >= 0; n--){
        for(int m = num2-1; m >= 0; m--){
            ans[n+m] += arr1[n] * arr2[m];
        }
    }
    for(int i = num1 + num2 -2; i > 0; i--){
        printf("%d ", ans[i]);
    }
    printf("%d", ans[0]);
}