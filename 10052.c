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

int check(int arr[], int num, int position){
    int count = 0;
    for(int i = 0; i < num; i++){
        if(arr[position] == arr[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    int ans = 2;
    int ansArr[num];
    int count = 0;
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++){
        ansArr[i] = 0;
    }
    
    for(int i = 0; i < num; i++){
        int temp = check(arr, num, i);
        if(temp == 1){
            ansArr[count] = arr[i];
            count++;
            ans = 1;
        }
    }
    bubbleSort(ansArr, count);
    if(ans == 1){
        for(int i = 0; i < count-1; i++){
            printf("%d ", ansArr[i]);
            }
        printf("%d\n", ansArr[count-1]);
    }else if(ans >= 1){
        printf("None\n");
    }
    return 0;
}