#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct BinaryTree{
	int size;
	int* array;
}bt;
	bt *createBT(int size){
		bt *tree = (bt *)malloc(sizeof(bt));
		tree->size = size;
		tree->array = (int *)malloc(size *sizeof(int));
		for(int i = 0; i < tree->size;i++){
			tree->array[i] = NULL;
		}
		return tree;
	}
	void insertKey(bt* tree, int idx, int x) {
    		if (idx >= tree->size) {
        		return;
    		}
    		if (tree->array[idx] == 0) {
        		tree->array[idx] = x;
        		return;
    		} 
    		else if (x < tree->array[idx]) {
        		insertKey(tree, 2 * idx + 1, x);
    		} 
    		else if (x > tree->array[idx]) {
        		insertKey(tree, 2 * idx + 2, x);
    		}
    		else {
        		printf("Repeating character\n\n");
   		 }
	}
	bool searchKey(bt *tree,int idx,int x){
		if(idx >= tree->size || !tree->array[idx]){
			return false;
		}
		if(tree->array[idx] == x) {
			return true;
		}
		else if(x < tree->array[idx]){
                        return searchKey(tree,2*idx+1,x);
                }
                else if(x > tree->array[idx]){
                        return searchKey(tree,2*idx+2,x);
                }

	}
	


int main(){
	
	bt *tree = createBT(10);
	insertKey(tree,0,5);
	insertKey(tree,0,11);
	insertKey(tree,0,6);
	insertKey(tree,0,3);
	insertKey(tree,0,0);
	insertKey(tree,0,6);
	insertKey(tree,0,3);
	insertKey(tree,0,1);
	insertKey(tree,0,4);
	insertKey(tree,0,9);
	insertKey(tree,0,10);
	insertKey(tree,0,13);
	printf("%d\n",searchKey(tree,0,6));
return 0;
}
