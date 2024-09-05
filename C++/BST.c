#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node{

	int data;
	struct Node* left;
	struct Node* right;

}node;

node *createNode(int x){
	node *temp = (node *)malloc(sizeof(node));
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


	node *insertNode(node* root,int x){
		if(!root){
			root = createNode(x);
		}
		if(x < root->data){
			root->left = insertNode(root->left,x);
		}
		else if(x > root->data){
			root->right = insertNode(root->right,x);
		}

		return root;
	}

	bool searchKey(node* root,int x){
		if(!root) return false;
		if(root->data == x) return true;
		if(x < root->data){
			return searchKey(root->left,x);
		}
		else if(x > root->data){
			return searchKey(root->right,x);
		}
	}



int main(){
	
	node *root = NULL;
	root = insertNode(root,5);
	insertNode(root,7);
	insertNode(root,1);
	insertNode(root,9);
	insertNode(root,3);
	insertNode(root,10);
	insertNode(root,2);
	insertNode(root,0);
	insertNode(root,13);
	insertNode(root,15);
	
	printf("is 8 there :%d\n",searchKey(root,8));
	printf("is 5 there :%d\n",searchKey(root,5));

}
