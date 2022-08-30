#include <stdio.h>

int main(){
    int num;
    int fas[24];
    fas[0] = 1;
    fas[1] = 1;
    scanf("%d", &num);
    for (int i = 2; i < 24; i++)
    {
        fas[i] = fas[i-1] + fas[i-2];
    }
    printf("%d", fas[num-1]*fas[num]);
    return 0;
}