#include <stdio.h>
#include <stdlib.h>

struct myPair{
    int first;
    int second;
};

typedef struct myPair Pair;

//Pair a = {5, 3};
//Pair* b = &a;
//Pair** c = &b;
//printf("%d %d", a.first, a.second);
//printf("%d %d", b->first, b->second);
//printf("%d %d", (*b).first, (*b).second);
//printf("%d %d", (**c).first, (**c).second);

int comp(const void* a, const void* b){
    const Pair* x = (const Pair*)a;
    const Pair* y = (const Pair*)b;
    if(x->second == y->second){
        return y->first - x->first;
    }
    return x->second - y->second;
}

int main(){
    Pair arr[] = {{5,3}, {6,4}, {5,1}, {3,8}, {7,4}, {0,1}};
    int size = sizeof(arr) / sizeof(*arr);

    qsort(arr, size, sizeof(Pair), comp);

    for(int i = 0; i < size; i++){
        printf("(%d, %d)\n", arr[i].first, arr[i].second);
    }
    return 0;
}