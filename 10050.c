#include <stdio.h>

int checkTheEdge(int x, int blocks){
    if(x > blocks){
        x = blocks;
    }else if(x < 0){
        x = -1;
    }
    return x;
}

void shovel(char wall[], int x1, int x2, int blocks){
    x1 = checkTheEdge(x1, blocks);
    x2 = checkTheEdge(x2, blocks);
    if(x1 > x2){
        for(int i = x2; i <= x1; i++){
            wall[i] = 'X';
        }
    }else{
        for(int i = x1; i <= x2; i++){
            wall[i] = 'X';
        }
    }
}

void scraper(char wall[], int x1, int x2, int blocks){
    x1 = checkTheEdge(x1, blocks);
    x2 = checkTheEdge(x2, blocks);
    if(x1 > x2){
        for(int i = x2; i <= x1; i++){
            wall[i] = '.';
        }
    }else{
        for(int i = x1; i <= x2; i++){
            wall[i] = '.';
        }
    }
}

int bucket(char wall[], int thePoint, int blocks){
    if(thePoint > blocks || thePoint < 0){
        return 0;
    }
    int rightPointer = thePoint;
    int leftPointer = thePoint-1;
    if(wall[thePoint] == 'X'){
        return 0;
    }else{
        while(wall[rightPointer] != 'X' && rightPointer != blocks){
            wall[rightPointer] = 'X';
            rightPointer++;
        }
        while(wall[leftPointer] != 'X' && leftPointer >= 0){
            wall[leftPointer] = 'X';
            leftPointer--;
        }
    }
    return 1;
}

int main(){
    int blocks;
    int howManyActions;
    scanf("%d%d", &blocks, &howManyActions);
    char wall[blocks];
    int actionChar;
    int x1Location;
    int x2Location;
    int onlyOneLocation;
    for(int i = 0; i < blocks; i++){
        wall[i] = '.';
    }
    for(int i = 0; i < howManyActions; i++){
        scanf("%d", &actionChar);
        switch(actionChar){
            case 1:
            scanf("%d%d", &x1Location, &x2Location);
            shovel(wall, x1Location, x2Location, blocks);
            break;
            case 2:
            scanf("%d%d", &x1Location, &x2Location);
            scraper(wall, x1Location, x2Location, blocks);
            break;
            case 3:
            scanf("%d", &onlyOneLocation);
            bucket(wall, onlyOneLocation, blocks);
            break;
        }
    }
    for(int i = 0; i < blocks; i++){
        printf("%c", wall[i]);
    }
    return 0;
}