#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* name;
    int   index;
} Pair;

int comp(const void* a, const void* b){
    const Pair* pair1 = (const Pair*)a;
    const Pair* pair2 = (const Pair*)b;
    if(pair1->name[1] == pair2->name[1]){
        return pair1->index - pair2->index;
    }
    return pair1->name[1] - pair2->name[1];
    //arr1[1] == *(arr1+1) == *(1+arr1) == 1[arr1]
}

int main(){
    char arr[][32] = {
        "richard",
        "adai1200",
        "cheewind",
        "adai1198",
        "seefong",
        "ricky"
    };
    //     "adai1200",
    //     "adai1198",
    //     "seefong",
    //     "cheewind",
    //     "richard",
    //     "ricky"
    int size = sizeof(arr) / sizeof(*arr);
    Pair arr1[size];
    for(int i = 0; i < size; i++){
        arr1[i].name  = arr[i];
        arr1[i].index = i;
    }

    qsort(arr1, size, sizeof(*arr1), comp);
    
    for(int i = 0; i < size; i++){
        printf("%s\n", arr1[i].name);
    }
    return 0;
}