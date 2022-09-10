#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int* np;
	int sum=0; 
	scanf("%d", &n);
	np = malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		scanf("%d",np+i);
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n ; j++){
			sum+=check(i,j,np);
		}
	}
	printf("%d\n",sum);
	
}
int check(int i, int j, int* np){
	//avg
	float sum=0;
	float avg;
	for(int x=i; x<=j; x++){
		sum+=np[x];
	}
	avg = sum/(j-i+1);
	for(int x=i; x<=j; x++){
		if(np[x]==avg) return 1;
	}
	return 0;
}