#include <stdio.h>

void posneg(int array[5][5], int result[2]);

int main(){
    int array[5][5];
    int result[2];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &array[i][j]);
        }
    }
    posneg(array, result);
    printf("%d\n", result[0]);
    printf("%d\n", result[1]);
    return 0;
}

void posneg(int array[5][5], int result[2]){
    int mine = 0;
    int puls = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(array[j][i] < 0){
                mine++;
            }else if(array[j][i] > 0){
                puls++;
            }
        }
    }
    result[0] = mine;
    result[1] = puls;
}