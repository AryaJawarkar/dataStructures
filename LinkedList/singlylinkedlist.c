#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int val;
	struct ode *next;
}Node;

void *createNode(int value){
	Node *a = (int*)malloc(1*sizeof(Node));
	a -> val = value;
	a -> next = NULL;
	return a;
}

Node *insertLast(Node *head,int value){
	Node *temp;
	if(head == NULL){
		temp = createNode(value);
	}
	else{
		head -> next = insertLast(head -> next,value);
		temp = head;
	}
	return temp;
}

Node *insertStart(Node *head,int value){
	Node *temp;
	if(head == NULL){
		head = createNode(value);
	}
	else{
		temp = head;
		head = createNode(value);
		head -> next = temp;
		temp = NULL;
	}
	return head;
}

Node insertParticular(Node *head,int pos,int val){
	Node *temp,*p,*a;
	pos--; 
	while(pos){
		p = temp;
		temp = temp -> next; 
	}

}

Node deleteParticular(int pos){

}

Node deleteLast(){

}

Node deleteFirst(){

}

int main(){
	
	Node *head;
	head = insertStart(head,3);

return 0;
}
