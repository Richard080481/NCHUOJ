#include <stdio.h>

void main(){
    int change1;
    int change2;
    scanf("%x %x", &change1, &change2);
    change1 &= 0b00001111;
    change2 &= 0b00001111;
    change2 <<= 4;
    change1 |= change2;
    printf("%x", change1);
}