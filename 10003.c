#include <stdio.h>

void main(){
    int dd;
    int mm;
    int yy;
    scanf("%d/%d/%d", &dd, &mm, &yy);
    printf("%d¦~%02d¤ë%02d¤é", yy, mm, dd);
}