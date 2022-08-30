#include <stdio.h>

int count(int n){
    int num = 0;
    for(int i = 0; i <= n; i++){
        num += i;
    }
    return num;
}

int main(){
    int num;
    int num_O = 0;
    int sum = 0;
    scanf("%d", &num);
    char ox[num+1];
    scanf("%s", ox);
    for(int i = 0; i < num; i++){
        if(ox[i] == 'O'){
            num_O++;
        }else{
            sum += count(num_O);
            num_O = 0;
        }
        if(i == num -1){
            sum += count(num_O);
        }
    }
    printf("%d", sum);
    return 0;
}