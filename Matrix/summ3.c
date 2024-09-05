#include<stdio.h>

int main(){
	
	int mat[3][2] = {{1,2},{3,4},{5,6}};
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 2;j++){
			mat[0][0] += mat[i][j];
		}
	}
	printf("%d",mat[0][0] - 1);
return 0;
}
