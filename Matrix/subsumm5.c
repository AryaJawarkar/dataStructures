#include<stdio.h>

int main(){

	int mat[4][6] = {{1,2,3,4,5,6},{7,8,9,0,3,2},{1,2,3,7,8,9},{3,4,5,2,0,9}};
	
	//intput index 0,1 and 2,4
	
	int sum = 0;

	for(int i = 0;i < 2;i++){
		for(int j = 1;j < 4;j++){
			sum += mat[i][j];
		}
	}
	printf("%d",sum);
return 0;
}
