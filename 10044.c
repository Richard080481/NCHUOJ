#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    char DNA[num];
    char reDNA[num];
    scanf("%s", DNA);
    for(int i = 0; i < num; i++){
        switch(DNA[i]){
            case 'A':
            reDNA[i] = 'T';
            break;
            case 'T':
            reDNA[i] = 'A';
            break;
            case 'C':
            reDNA[i] = 'G';
            break;
            case 'G':
            reDNA[i] = 'C';
            break;
        default:
        printf("Error");
        }
    }
    for(int i = 0; i < num; i++){
        printf("%c", reDNA[i]);
    }
    return 0;
}