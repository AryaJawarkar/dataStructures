#include<stdio.h>
int f(int i ,int n){
	if(i > n){
	return 0;
	}
	printf("%d",i);
	f(i+1,n);
}
int main(){
	int n = 4 ;
	f(1,n);
return 0;
}
