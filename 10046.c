#include <stdio.h>
#include <string.h>
int check(char num[]){
for(int i = 0; i < strlen(num); i++){
        for(int j = strlen(num)-1; j > i; j--){
            if(num[i] == num[j]){
                printf("Repeated digits");
                return 1;
            }
        }
    }
    printf("No repeated digits");
    return 0;
}

int main(){
    char num[11];
    scanf("%s", num);
    check(num);
    return 0;
}