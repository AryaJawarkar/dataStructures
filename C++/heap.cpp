#include<bits/stdc++.h>

using namespace std;

class Heap{
	int heapSize;
	int totSize;
	int *heap;
	public:
	Heap(int size){
		totSize = size;
		heapSize = 0; 
		heap = new int[size];
	}

	void insert(int val){
		if(heapSize == totSize){ 
			cout<<"Heap Is Full"<<endl;
			return; 
		}
		heap[heapSize] = val;
		int idx = heapSize;
		heapSize++;

		//compare the inserted element with parent elament
		
		while(idx >= 0 && heap[parent(idx)] < heap[idx]){
			swap(heap[idx],heap[parent(idx)]);
			idx = parent(idx);
		}

		cout<<heap[idx]<<" Inserted\n";
	}

	void deelete(){
		if(heapSize == 0){
			cout<<"Heap Underflow"<<endl;
			return;
		}
		cout<<heap[0]+"Deleted"<<endl;
		
		heap[0] = heap[heapSize-1];
		heapSize--;
		int idx = 0;

		if(heapSize == 0) return;
		Heapify(idx);
	}

	void Heapify(int idx){
		int largest = idx;
		int l = leftChild(idx);
		int r = rightChild(idx);
		if(l < heapSize && heap[l] > heap[largest]){
			largest = l;
		}
		if(r < heapSize && heap[r] > heap[largest]){
			largest = r;
		}
		if(largest != idx){
			swap(heap[idx],heap[largest]);
			Heapify(largest);
		}
	}	

	void print(){
		for(int i = 0;i < heapSize;i++){
			cout<<heap[i]<<endl;
		}
	}

	private:
	int parent(int idx){
		return (idx-1)/2;
	}

	int leftChild(int idx){
		return 2*idx+1;
	}

	int rightChild(int idx){
		return 2*idx+2;
	}
};
int main(){
	Heap H(6);
	H.insert(4);
	H.insert(10);
	H.insert(122);
	H.insert(16);
	H.insert(33);
	H.insert(12);
	H.insert(9);
	H.print();
	H.deelete();
	H.print();
}
