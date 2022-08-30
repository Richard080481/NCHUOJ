#include <stdio.h>

    void main(){
        int num1;
        int deno1; //4
        int num2;
        int deno2; //5
        int tank;  
        int count = 1;
        scanf("%d/%d%d/%d", &num1, &deno1, &num2, &deno2);
        tank = deno1;
        while(deno1 % deno2 != 0){
            deno1 += tank;
            count++;
        }
        num1 *= count;
        count = deno1 / deno2;
        num2 *= count;
        printf("%d/%d", num1 + num2, deno1);
    }