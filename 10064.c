#include <stdio.h>

int main(){
    int num;
    int mine = 0;
    int plus = 0;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++){
        if(arr[i] < 0){
            mine++;
        }else if(arr[i] > 0){
            plus++;
        }
    }
    printf("%d %d", plus, mine);
}