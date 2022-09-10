#include <stdio.h>

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

#define USE_BUBBLE_SORT 1

// sort(arr, lengthOfArr, 1);
int sort(int arr[], int num, int base){
#if USE_BUBBLE_SORT
    int count = 0;

    for(int i = 0; i < num; i++){
        for(int j = i; j < num; j++){
            if(arr[i] > arr[j]){
                swap(&arr[i], &arr[j]);
                count += 2;
            }
        }
    }

    return count;
#else
    if (base == num) return 0;

    int count = 0;

    while(arr[0] != base){
        for (int i = 1; i < num; i++){
            if (arr[i] == arr[0] - 1){
                swap(&arr[i], &arr[0]);
                count += 2;
                break;
            }
        }
    }

    return count + sort(arr+1, num, base+1);
#endif // #if USE_BUBBLE_SORT
}

int main(){
    int howManyTimesToSort;
    scanf("%d", &howManyTimesToSort);

    int num;
    while(howManyTimesToSort--)
    {
        scanf("%d", &num);
        int arr[num];
        for(int j = 0; j < num; j++){
            scanf("%d", &arr[j]);
        }

        printf("%d\n", sort(arr, num, 1));
    }

    return 0;
}

/*
1 2 3   0
1 3 2   1
2 1 3   1
2 3 1   2
3 1 2   2
3 2 1   3

1 2 3 4 = 0
1 2 4 3 = 1
1 3 2 4 = 1
1 3 4 2 = 2
1 4 2 3 = 2
1 4 3 2 = 3

2 1 3 4 = 1
2 1 4 3 = 2
2 3 1 4 = 2
2 3 4 1 = 3
2 4 1 3 = 3
2 4 3 1 = 4

3 1 2 4 = 2
3 1 4 2 = 3
3 2 1 4 = 3
3 2 4 1 = 4
3 4 1 2 = 4
3 4 2 1 = 5

4 1 2 3 = 3
4 1 3 2 = 4
4 2 1 3 = 4
4 2 3 1 = 5 <---- source
4 3 1 2 = 5
4 3 2 1 = 6 <---- 1

1 4 2 3 = 2
1 4 3 2 = 3
2 4 1 3 = 3
2 4 3 1 = 4 <---- target
3 4 1 2 = 4
3 4 2 1 = 5 <---- 2

1 2 4 3 = 1
1 3 4 2 = 2
2 1 4 3 = 2
2 3 4 1 = 3
3 1 4 2 = 3
3 2 4 1 = 4

1 2 3 4 = 0
1 3 2 4 = 1
2 1 3 4 = 1
2 3 1 4 = 2
3 1 2 4 = 2
3 2 1 4 = 3
*/