#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int row[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &row[i]);
    }
    for(int i = num-1; i >= 0; i--){
        printf("%d ", row[i]);
    }
}