//#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct bitVector{
	int *arr;
	int size;
}bitV;

bitV *createBitVector(int x){
	bitV *temp = (bitV *)malloc(sizeof(bitV));
	temp->size = x;
	temp->arr = (int *)calloc(ceil(x/8),sizeof(int));
	return temp;
}

void insert(bitV *biV,int x){
	if(x >= biV->size){
		return;
	}
	biV->arr[x>>5] |= (1<<(x%32));
}

int search(bitV *biV,int x){
	if(x >= biV->size){
		return 0;
	}
	return biV->arr[x>>5] & (1<<(x%32));
}

int main(){
	int size = 64;
	bitV *bv = createBitVector(size);

	insert(bv,33);

	printf("is 33 there %d\n ",search(bv,33));
	printf("is 35 there %d\n ",search(bv,35));
	
return 0;	
}
