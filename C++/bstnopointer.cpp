#include<bits/stdc++.h>

using namespace std;

class Binarytree{
	public:
	int size;
	int* array;
	Binarytree(int size){
		this->size = size;
		this->array = new int[size];
		for(int i = 0; i < this->size;i++){
			array[i] = NULL;
		}
	}
	void insert(int x){
		insertkey(0,x);
	}
	bool search(int x){
		return searchKey(0,x);
	}
	void inorder(){
		inorderT(0);
	}
	private:
	void insertkey(int idx,int x){
		if(idx >= this->size){
			cout<<"Tree is full"<<endl;
			cout<<endl;
			return;
		}
		if(!array[idx]){
			array[idx] = x;
			return;
		}
		else if(x < array[idx]){
			insertkey(2*idx+1,x);
		}
		else if(x > array[idx]){
			insertkey(2*idx+2,x);
		}
		else{
			cout<<"Repeating character"<<endl;
			cout<<endl;
		}
	}
	bool searchKey(int idx,int x){
		if(idx >= this->size || !array[idx]){
			return false;
		}
		if(array[idx] == x) {
			return true;
		}
		else if(x < array[idx]){
                        searchKey(2*idx+1,x);
                }
                else if(x > array[idx]){
                        searchKey(2*idx+2,x);
                }

	}
	void inorderT(int idx){
		if(idx >= this->size || !array[idx]){
                        return;
                }
		inorderT(2*idx+1);
		cout<<array[idx]<<endl;
		inorderT(2*idx+2);

	}
};

int main(){
	
	Binarytree Tree(10);
	cout<<"Inserting 5 : "<<endl;
	Tree.insert(5);
	cout<<"Inserting 11 : "<<endl;
	Tree.insert(11);
	cout<<"Inserting 6 : "<<endl;
	Tree.insert(6);
	cout<<"Inserting 3 : "<<endl;
	Tree.insert(3);
	cout<<"Inserting 0 : "<<endl;
	Tree.insert(0);
	cout<<"Inserting 6 : "<<endl;
	Tree.insert(6);
	cout<<"Inserting 3 : "<<endl;
	Tree.insert(3);
	cout<<"Inserting 1 : "<<endl;
	Tree.insert(1);
	cout<<"Inserting 4 : "<<endl;
	Tree.insert(4);
	cout<<"Inserting 9 : "<<endl;
	Tree.insert(9);
	cout<<"Inserting 10 : "<<endl;
	Tree.insert(10);
	cout<<"Inserting 13 : "<<endl;
	Tree.insert(13);
	cout<<"Search 6 : "<<endl;
	cout<<Tree.search(6)<<endl;
	cout<<"Inorder traversal : "<<endl;
	Tree.inorder();
return 0;
}
