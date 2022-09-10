#include <stdio.h>

int check(int muti, int num){
    // 1. count the number
    int theOnly = 0;
    int temp = (muti+1) * 222;
    temp -= num;
    int ans = temp;
    while(temp != 0){
        theOnly += temp % 10;
        temp /= 10;
    }

    // 2. check is ture or not
    if(theOnly == muti + 1){
        return ans; 
    }else{
    // 3. if not do it again
        return check(muti+1, num);
    }
}

int main(){
    int num;
    scanf("%d", &num);
    int muti = num / 222;
    int ans = check(muti, num);
    int ansArr[3];
    for(int i = 2; i >=0; i--){
        ansArr[i] = ans % 10;
        ans /= 10;
    }
    for(int i = 0; i < 2; i++){
        printf("%d ", ansArr[i]);
    }
    printf("%d", ansArr[2]);
    return 0;
}