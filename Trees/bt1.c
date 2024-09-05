#include<stdio.h>
#include<stdlib.h>
typedef struct Node(){
	int val;
	struct Node *left,*right;
}node;

node *insertNode(node *r,int value){

}

node *createNode(int value){
	node *temp;
	temp -> val = value;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

int main(){
	int a;
        printf("Enter the root node value : ");
        scanf("%d",&a);
	node *root = createNode(a);
	printf("Insert child nodes : ");
		
}
