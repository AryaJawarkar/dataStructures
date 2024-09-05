#include<stdio.h>

int f(int n,int sum){
	if(n < 1){
	printf("%d\n",sum);	
		return 0;}
f(n - 1,sum + n);
}

int main(){
	int sum = 0,n = 5;
	 f(n,sum);
return 0;
}
