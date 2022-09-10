#include<stdio.h>

int calMaxPointFromMap(int row, int col, int ans[row][col]);

int main(){
    int row;
    int cols;  
    int Max_point;
	scanf("%d%d", &row, &cols);
	int ans[row+1][cols+1];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < cols; j++){
			ans[row][cols] = 0; //初始化陣列
        }
    }
	
	for(int i = 0; i < row; i++){ //index 從 1 開始
		for(int j = 0; j < cols; j++){
			scanf("%d", &ans[i][j]); //讀入地圖
        }
    }
	Max_point = calMaxPointFromMap(row, cols, ans);
	printf("%d", Max_point);
}

int calMaxPointFromMap(int row, int col, int ans[row+1][col+1]){
	int max = 0;
	int temp = 0;
	int xLocation;
	int yLocation;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			xLocation = i;
			yLocation = j;
			temp = -3 * ans[xLocation][yLocation];
			while(xLocation >= 0 && yLocation >= 0){
				temp += ans[xLocation][yLocation];
				xLocation--;
				yLocation--;
			}
			xLocation = i;
			yLocation = j;
			while(xLocation >= 0 && yLocation < col){
				temp += ans[xLocation][yLocation];
				xLocation--;
				yLocation++;
			}
			xLocation = i;
			yLocation = j;
			while(xLocation < row && yLocation < col){
				temp += ans[xLocation][yLocation];
				xLocation++;
				yLocation++;
			}
			xLocation = i;
			yLocation = j;
			while(xLocation < row && yLocation >= 0){
				temp += ans[xLocation][yLocation];
				xLocation++;
				yLocation--;
			}
			if(temp > max){
				max = temp;
			}
		}
	}
	return max;
}