#include <stdio.h>

typedef struct object{
    int id;
    int price;
}O;

void bubble_sort(O array[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (array[j].price > array[j+1].price){
                O temp1 = array[j];
                array[j] = array[j+1];
                array[j+1] = temp1;
            }
        }
    }
}

int main(){
    int num;
    scanf("%d", &num);
    O obj[num];
    for(int i = 0; i < num; i++){
        scanf("%d%d", &obj[i].id, &obj[i].price);
    }
    bubble_sort(obj, num);

    printf("maxprice_id = %d", obj[num-1].id);
}