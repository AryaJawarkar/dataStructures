#include<stdio.h>
int f(int i,int arr[],int n){
if(i >= n/2){return 0;}
 int temp;
 temp = arr[i];
 arr[i] = arr[n-i-1];
 arr[n-i-1] = temp;
 f(i + 1,arr,n);
}
int main(){
	int arr[] = {1,2,3,4,5};
	f(0,arr,5);
	int i = 0;

	while(i < 5){
		printf("%d\n",arr[i]);
	i++;
	}
return 0;
}
