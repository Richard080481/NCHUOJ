#include <stdio.h>
#include <string.h>
int main(){
    char str1[16];
    scanf("%s", str1);
    for(int i = 0; i < strlen(str1)/2; i++){
        if(str1[i] != str1[strlen(str1) - i - 1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}