#include <stdio.h> 

int main(){
    char ans[5];
    char guess[5];
    int num_A = 0;
    int num_B = 0;
    scanf("%s %s", ans, guess);
    for(int n = 0; n < 4; n++){
        for(int m = 0; m < 4; m++){
            if(ans[n] == guess[m]){
                num_B ++;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        if(ans[i] == guess[i]){
            num_A++;
        }
    }
    printf("%dA%dB", num_A, num_B - num_A);
    return 0;
}