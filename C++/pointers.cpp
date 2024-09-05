#include<iostream>

using namespace std;

int main(){

int i = 1;

int * p = &i;
cout << p << endl;
(p)++;
cout << p << endl;
}
