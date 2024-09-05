#include<stdio.h>

int main(){
	
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0;i < 3 - 1;i++){
		for(int j = i + 1;j < 3;j++){
			int temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
	for(int i = 0;i < 3;i++){
		int j = 0;
		int k = 3 - 1;

		while(j < k){
			int temp = mat[i][j];
			mat[i][j] = mat[i][k];
			mat[i][k] = temp;
			k--;
			j++;
		}
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
		
	}
return 0;
}
