#include<stdio.h>
#include<stdbool.h>
bool f(int i,char *a,int n){
	if(i == n/2){return 1;}
	if(a[i] != a[n-i-1]){return 0;}
	f(i + 1,a,n);
}

int main(){
	char a[] = "raceaecar";
	if(f(0,a,9)){printf("True");}else{printf("False");};
return 0;
}
