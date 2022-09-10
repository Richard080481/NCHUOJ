#include <stdio.h>
#include <stdlib.h>

typedef struct time{
    int start;
    int end;
}time;

int comp(const void* a, const void* b){
    time x = *(const time*)a;
    time y = *(const time*)b;
    return x.start - y.start;
}

int main(){
    int howManyfarmer;
    scanf("%d", &howManyfarmer);
    time farmers[howManyfarmer];
    for(int i = 0; i < howManyfarmer; i++){
        scanf("%d%d", &farmers[i].start, &farmers[i].end);
    }
    
    qsort(farmers, howManyfarmer, sizeof(time), comp);

    int theStartToMilk = farmers[0].start;
    int theEndToMilk = farmers[0].end;
    int startTemp;
    int longestMilktime = 0;
    int longestStop = 0;

    for(int i = 0; i < howManyfarmer - 1; i++){
        startTemp = farmers[i+1].start;
        
        if(startTemp <= theEndToMilk){
            if(theEndToMilk < farmers[i+1].end){
                theEndToMilk = farmers[i+1].end;
            }
        }else{
        	if(longestStop < startTemp - theEndToMilk){
        		longestStop = startTemp - theEndToMilk;
			}
            theStartToMilk = farmers[i+1].start;
            theEndToMilk = farmers[i+1].end;
        }
        if(longestMilktime < theEndToMilk - theStartToMilk){
            longestMilktime = theEndToMilk - theStartToMilk;
        }
    }
    if(howManyfarmer == 1){
            longestMilktime = theEndToMilk - theStartToMilk;
        }
    printf("%d %d", longestMilktime, longestStop);
}