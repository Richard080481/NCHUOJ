#include <stdio.h>

int distance(char str1[], char str2[], int column){
    int sum = 0;
    for(int i = 0; i < column; i++){
        int temp = str1[i] - str2[i];
        temp = temp >= 0 ? temp : -temp;
        sum += temp;
    }
    return sum;
}

int main(){
    int row;
    int column;
    scanf("%d%d", &row, &column);
    char str[row][column+1];
    int _min = 1<<30;
    
    for(int i = 0; i < row; i++){
        scanf("%s", str[i]);
        for(int j = 0; j < i; j++){
            int d = distance(str[i], str[j], column);
            _min = d < _min ? d : _min;
        }
    }
    printf("%d\n", _min);
    return 0;
}