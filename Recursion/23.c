#include<stdio.h>
int f(int n){
	if(n == 0){return 0;}
return (n + f(n - 1));
}
int main(){
	int n = 5;
	printf("%d",f(n));
return 0;
}
