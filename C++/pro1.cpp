#include<bits/stdc++.h>

int main(){
	int a,b;
	cout<<"enter two numbers: "<<endl;
	cin >> a;
	cin >> b;
	while(1){	
		int x;
		cout<<"bhai operation batade ::: 1.ADDITION 2.SUBTRACTION 3.DIVISION 4.MULTIPLICATION 5.RETAKE"
		cin>>x;
		switch(x){
			case 1 : cout<<a+b;
				 break;
			case 2 : cout<<a-b;
				 break;
			case 3 : cout<<a/b;
				 break;
			case 4 : cout<<a*b;
				 break;
			case 5 : cout<<"Enter values of two numbers"
				 cin>>a;
				 cin>>b;
				 break;
			default :cout<<"nota operation";
		}
	}
}
