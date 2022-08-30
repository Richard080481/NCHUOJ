#include <stdio.h>

void main(){
    int price; 
    scanf("%x", &price);
    price = price | 0x70;
    price = price & 0xFFDF;
    printf("%x", price); 
}