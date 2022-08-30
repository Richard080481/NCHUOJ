#include <stdio.h>

int n;
int calMaxPointFromMap(int ans[n][n]);

int main ()
{
	int i, j, Max_point;
	scanf("%d",&n);
	
	int ans[n][n];
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
			scanf("%d", &ans[i][j]);
			
	Max_point = calMaxPointFromMap(ans);
	printf("%d", Max_point);
}

int calMaxPointFromMap(int ans[n][n])
{
	int ret = 0,i,j;
	
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
		{
			int tmp = ans[i][j] * 2;
			if((i - 1 >= 0))
				tmp += ans[i - 1][j];
			if((j - 1 >= 0))
				tmp += ans[i][j - 1];
			if((i + 1 < n))
				tmp += ans[i + 1][j];
			if((j + 1 < n))
				tmp += ans[i][j + 1];
				
			ret = ret < tmp ? tmp : ret;
		}
		
	return ret;
}