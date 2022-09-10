#include <stdio.h>
#include <string.h>

int calcSadValue(char num[]){
    int sum = 0;
    for(int i = 0; i < strlen(num); i++){
        sum += ((i+1) * (num[i] - '0'));
    }
    return sum;
}

int calcHappyValue(char num[]){
    int sum = 0;
    for(int i = 0; i < strlen(num); i++){
        sum += ((strlen(num)-i) * (num[i] - '0'));
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
    int num;
    scanf("%d", &num);
    int temp;
    char storge[11];
    char storge2[11];
    int happy[num];
    int sad[num];
    int hs[num];
    int stride;
    for(int i = 0; i < num; i++){
        stride = 0;
        for(int j = 0; j < 11; j++){
            storge[j] = 0;
        }
        scanf("%d", &temp);
        while(temp != 0){
            storge[stride] = (temp % 10) + '0';
            temp /= 10;
            stride++;
        }
        happy[i] = calcHappyValue(storge);
        sad[i] = calcSadValue(storge);
        hs[i] = calcHSValue(happy[i], sad[i]);
    }
    for(int i = 0; i < num; i++){
        printf("%d %d\n%d\n", happy[i], sad[i], hs[i]);
    }
    return 0;
}