#include <stdio.h>
#include <string.h>

int calcHappyValue(char num[]){
    int sum = 0;
    for(int i = 0; i < strlen(num); i++){
        sum += ((i+1) * num[i]);
    }
    return sum;
}

int calcSadValue(char num[]){
    int sum = 0;
    for(int i = 0; i < strlen(num); i++){
        sum += ((strlen(num)-i) * num[i]);
    }
    return sum;
}

int calcHSValue(int happy, int sad){
    if(happy > sad){
        return happy - sad;
    }else{
        return sad - happy;
    }
}

int main(){
    int happy;
    int sad;
    int hs;
    int num;
    scanf("%d", &num);
    char storge[11];
    scanf("%s", storge);
    for(int i = 0; i < num; i++){
        happy = calcHappyValue(storge);
        sad = calcSadValue(storge);
        hs = calcHSValue(happy, sad);
        printf("%d %d\n%d\n", happy, sad, hs);
    }
}