#include <stdio.h>

    void main(){
        char name1;
        char name2;
        char name3;
        scanf("%c%c%c", &name1, &name2, &name3);
        printf("%c%c%c", name1-32, name2-32, name3-32);
    }