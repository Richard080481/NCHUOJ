#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b){
    const int* x = (const int*)a;
    const int* y = (const int*)b;
    if(x[0] > y[0]) return 1; 
    if(x[0] < y[0]) return -1;
    return 0; 
}

int _min(int a, int b){
    return a < b ? a : b;
}

int findCost(int total, int num, int farm[][2]){
    qsort(farm, num, sizeof(*farm), comp);
    int cost = 0;
    for(int i = 0; i < num; i++){ 
        // 1. check if we still need milk
        if(total <= 0) break;

        // 2. buy as much as we need
        int amount = _min(total, farm[i][1]);
        cost += amount * farm[i][0];
        total -= amount;
    }
    return cost;
}

int main(){
    int total;
    int num;
    scanf("%d%d", &total, &num);
    int farm[num][2];
    for(int i = 0; i < num; i++){
        scanf("%d", &farm[i][0]);
        scanf("%d", &farm[i][1]);
    }
    int ans = findCost(total, num, farm);
    printf("%d", ans);
    return 0;
}