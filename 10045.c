#include<stdio.h>

int n;	//宣告全域變數 n 
int calMaxPointFromMap(int ans[n+1][n+1]); //宣告函式 

int main()
{
	int i, j, Max_point;
	scanf("%d", &n);
	int ans[n+1][n+1];
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			ans[i][j] = 0; //初始化陣列
	
	for(i=1;i<=n;i++)  //index 從 1 開始
		for(j=1;j<=n;j++)
			scanf("%d", &ans[i][j]); //讀入地圖
	Max_point = calMaxPointFromMap(ans);
	printf("%d", Max_point);
}

int calMaxPointFromMap(int ans[n+1][n+1])
{
	int max = 0;
    int temp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 && j == 1){
                temp = ans[i][j]*2 + ans[i+1][j] + ans[i][j+1];
            }else if(i == 1 && j == n){
                temp = ans[i][j]*2 + ans[i][j-1] + ans[i+1][j];
            }else if(i == n && j == 1){
                temp = ans[i][j]*2 + ans[i][j+1] + ans[i-1][j];
            }else if(i == n && j == n){
                temp = ans[i][j]*2 + ans[i][j-1] + ans[i-1][j];
            }else if(i == 1 && (j < n && j > 1)){
                temp = ans[i][j]*2 + ans[i+1][j] + ans[i][j-1] + ans[i][j+1];
            }else if(i == n && (j < n && j > 1)){
                temp = ans[i][j]*2 + ans[i-1][j] + ans[i][j-1] + ans[i][j+1];
            }else if(j == 1 && (i < n && i > 1)){
                temp = ans[i][j]*2 + ans[i][j+1] + ans[i-1][j] + ans[i+1][j];
            }else if(j == n && (i < n && i > 1)){
                temp = ans[i][j]*2 + ans[i][j-1] + ans[i-1][j] + ans[i+1][j];
            }else{
                temp = ans[i][j]*2 + ans[i-1][j] + ans[i+1][j] + ans[i][j-1] + ans[i][j+1];
            }
            if(temp > max){
                max = temp;
            }
        }
    }
    return max;
}