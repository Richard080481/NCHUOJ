#include <stdio.h>

void main(){
    char id[10];
    for(int i = 0; i < 10; i++){
    scanf("%c", &id[i]);
    }
    switch(id[0]){
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'W':
        id[0] -= 55;
        break;
        case 'I':
        id[0] = '\"';
        break;
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        id[0] -= 56;
        break;
        case 'O':
        id[0] -= 44;
        break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':        
        case 'T':
        case 'U':
        case 'V':
        id[0] -= 57;
        break;
        case 'X':
        case 'Y':
        id[0] -= 58;
        break;
        case 'Z':
        id[0] -= 57;
    }
    int deid[10];
    deid[0] = id[0]%10*9 + id[0]/10;
    for(int i = 1; i <= 9; i++){
        deid[i] = id[i] - '0';
    }
    int sum = 0;
    for(int i = 1; i < 9; i++){
        sum += deid[i]*(9-i);
    }
    sum += deid[0];
    sum += deid[9];
    if(sum % 10 == 0){
        printf("real");
    }else{
        printf("fake");
    }
}