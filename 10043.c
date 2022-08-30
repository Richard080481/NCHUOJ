#include <stdio.h>

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
 
    if(n - 1 > 1){
        bubbleSort(arr, n - 1);
    }
}
 
int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    int max;
    scanf("%d", &max);
    bubbleSort(arr, num);
    printf("%d", arr[num-max]);
    return 0;
}

