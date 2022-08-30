#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int pop[num+1];
    float sum;
    for(int i = 0; i < num; i++){
        scanf("%d", &pop[i]);
    }
    int temp;
    for(int n = 0; n < num-1; n++){
        for(int m = 0; m < num-1-n ; m++){
            if(pop[m] > pop[m+1]){
                temp = pop[m+1];
                pop[m+1] = pop[m];
                pop[m] = temp;
            }
        }
    }
    for(int i = 0; i < num; i++){
        sum += pop[i];
    }
    sum /= num;
    printf("%d %d\n%.2f", pop[num-2], pop[1], sum);
}