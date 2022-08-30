#include <stdio.h>
#include <string.h>
int main(){
    char name[80];
    scanf("%s", name);
    if(name[strlen(name)-1] == 'c' && name[strlen(name)-2] == '.'){
        printf("YES");
    }else{
        printf("NO");
    }
}