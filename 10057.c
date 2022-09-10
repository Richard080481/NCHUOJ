#include <stdio.h>

int main(){
    int total;
    int take;
    scanf("%d%d", &total, &take);
    if(total % (take+1) == 0){
        printf("Lose");
    }else{
        printf("Win");
    }
}