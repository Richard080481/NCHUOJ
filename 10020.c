#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int k = 1; k<=n; k++){
        for(int j = 1; j <= k; j++){
            printf("%d", j);
        }
    }
}