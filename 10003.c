#include <stdio.h>

void main(){
    int dd;
    int mm;
    int yy;
    scanf("%d/%d/%d", &dd, &mm, &yy);
    printf("%d�~%02d��%02d��", yy, mm, dd);
}