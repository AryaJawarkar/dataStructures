#include<stdio.h>

int f(int i,int n){
	if(i > n){ return 0; }
	f(i + 1,n);
	printf("%d\n",i);
}

int main(){
	int n = 3;
	f(1,n);
return 0;
}
