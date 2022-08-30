#include <stdio.h>

int ROR(unsigned int num, int times){
    unsigned int temp;
    for(int i = 0; i < times; i++){
        temp = num & 0x1;
        num >>= 1;
        temp <<= 31;
        num = temp | num;
    }
    return num;
}

int main(){
    unsigned int num;
    int times;
    scanf("%x%d", &num, &times);
    num = ROR(num, times);
    printf("0x%x", num);
    return 0;
}