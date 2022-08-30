#include <stdio.h>

int main(){
    int M;
    int Y;
    int C;
    int num;
    scanf("%d%d%d%d", &M, &Y, &C, &num);
    char color;
    scanf("%c", &color);
    while(num--){
        scanf("%c", &color);
        switch(color){
            case 'M': M-=1; break;
            case 'Y': Y-=1; break;
            case 'C': C-=1; break;
            case 'R': M-=1; Y-=1; break;
            case 'V': C-=1; M-=1; break;
            case 'G': C-=1; Y-=1; break;
            case 'B': M-=1; C-=1; Y-=1; break;
            case 'W': break;
            default: printf("Error\n"); break;
        }
        if(M < 0 || Y < 0 || C < 0){
            printf("NO\n");
            break;
        }
        if(num == 0){
            printf("YES %d %d %d\n", M, Y, C);
            break;
        }
    }
    return 0;
}