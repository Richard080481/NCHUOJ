#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b){
    int x = *(const int*)a;    
    int y = *(const int*)b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;    
}

void bubbleSort(int arr[], int n, int (*comp2)(const void* a, const void* b)){
    for(int i = 0; i < n - 1; i++){
        // if(arr[i] > arr[i + 1]){
        if(comp2(&arr[i], &arr[i+1]) > 0){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
 
    if(n - 1 > 1){
        bubbleSort(arr, n - 1, comp2);
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
    // bubbleSort(arr, num, comp);
    qsort(arr, num, sizeof(int), comp);
    printf("%d", arr[num-max]);
    return 0;
}

