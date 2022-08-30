#include <stdio.h>

void main(){
    char sample[11];
    int tank1 = 0;
    int tank2 = 0;
    for(int i = 0; i < 11; i++){
        scanf("%c", &sample[i]);
    }

    for(int i = 0; i < 11; i+=2){
        tank1 += (int)(sample[i] - '0');
    }
    for(int i = 1; i < 11; i+=2){
        tank2 += (int)(sample[i] - '0');
    }
    tank1 = tank1 * 3 + tank2;
    tank1 -= 1;
    tank1 %= 10;
    if(tank1 >= 9){
        printf("%d\n", tank1 - 9);
    }else{
        printf("%d\n", 9 - tank1);
    }
}