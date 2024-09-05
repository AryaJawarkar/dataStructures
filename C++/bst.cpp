#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int x):data(x),left(NULL),right(NULL){}
};

class BinaryTree{
	Node* root;
	Node *insertNode(Node* root,int x){
		if(!root) return new Node(x);
		if(x < root->data){
			root->left = insertNode(root->left,x);
		}
		else if(x > root->data){
			root->right = insertNode(root->right,x);
		}

		return root;
	}
	void inorderT(Node* root){
		if(root){
			inorderT(root->left);
			cout<<root->data;
			inorderT(root->right);
		}
	}
	bool searchKey(Node* root,int x){
		if(!root) return false;
		if(root->data == x) return true;
		if(x < root->data){
			return searchKey(root->left,x);
		}
		else if(x > root->data){
			return searchKey(root->right,x);
		}
	}
	Node *Delete(Node* root,int x){
		if(!root) return root;
		if(x < root->data){
			root->left = Delete(root->left,x);
		}
		else if(x > root->data){
			root->right = Delete(root->right,x);
		}
		else{
			if(!root->left){
				Node* temp = root->right;
				delete root;
				return temp;
			}
			else if(!root->right){
				Node* temp = root->left;
				delete root;
				return temp;
			}
		}
		Node* temp = inorderkey(root->right);
	}

	Node *inorderkey(Node* root){
		Node* curr = root;
		while(curr && curr->left){
			curr = curr->left;
		}
		return curr;
	}
	public:
		BinaryTree():root(NULL){}
		void insert(int x){
			root = insertNode(root,x);
		}
		void inorder(){
			this->inorderT(this->root);
		}
		bool search(int x){
			return searchKey(root,x);
		}
		void remove(int x){
			root = Delete(root,x);
		}
};

int main(){
	BinaryTree Tree;
	Tree.insert(5);
	Tree.insert(7);
	Tree.insert(1);
	Tree.insert(9);
	Tree.insert(3);
	Tree.insert(10);
	Tree.insert(2);
	Tree.insert(0);
	Tree.insert(13);
	Tree.insert(15);
	Tree.inorder();
	cout<<Tree.search(8)<<endl;
	Tree.remove(8);
	Tree.inorder();
}
