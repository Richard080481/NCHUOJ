#include <stdio.h>

    void main(){
        int score;
        scanf("%d", &score);
        if(score>=50){
            printf("100");
        }else if(score>=45){
            printf("90");
        }else if(score>=40){
            printf("80");
        }else if(score>=35){
            printf("70");
        }else if(score>=30){
            printf("60");
        }else{
            printf("0");
        }
    }