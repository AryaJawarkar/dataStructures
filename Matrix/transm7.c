#include<stdio.h>

int main(){

	int mat[2][3] = {{1,2,3},{4,5,6}};
	int rmat[3][2];
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 2;j++){
			rmat[i][j] = mat[j][i];
		}
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 2;j++){
			printf("%d",rmat[i][j]);
		}
		printf("\n");
	}


return 0;
}
