#include<stdio.h>

int main(){

	int mat[3][3] = {{1,3,2},{4,0,1},{6,3,1}};

	int max = mat[0][0];
	int min = mat[0][0];
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
			if(mat[i][j] < min){
				min = mat[i][j];
			}
		}
	}
	printf("%d\n%d\n",max,min);
return 0;
}
