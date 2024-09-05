#include<bits/stdc++.h>

using namespace std;

void Heapify(int arr[],int idx,int n){
	int largest = idx;
	int l = 2*idx+1;
	int r = 2*idx+2;

	if(l < n && arr[l] > arr[largest]){
		largest = l;
	}
	if(r < n && arr[r] > arr[largest]){
		largest = r;
	}

	if(largest != idx){
		swap(arr[largest],arr[idx]);
		Heapify(arr,largest,n);
	}
}

void buildMaxheap(int arr[],int n){
	for(int i = (n/2)-1;i >= 0;i--){
		Heapify(arr,i,n);
	}
}

void sort(int arr[],int n){
	for(int i = n-1;i >= 0;i--){
		swap(arr[0],arr[i]);
		Heapify(arr,0,i);
	}
}

void printHeap(int *arr,int n){
	for(int i = 0;i < n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	
	int arr[] = {10,3,8,9,5,13,18,14,11,40,70};
	int n = 11;
	buildMaxheap(arr,n);	
	sort(arr,n);
	printHeap(arr,n);
return 0;
}
