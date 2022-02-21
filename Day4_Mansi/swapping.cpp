#include <iostream>
using namespace std;

// passing by reference without pointers
void swap(int &n1, int &n2){
	int temp;
	temp = n1;
	n1= n2;
	n2= temp;
}
// Passing by reference with Pointers
void swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1= *n2;
	*n2= temp;
}
int main(){
	int a=10, b=20,c=1,d=2;
	cout<<"passing by reference without pointers"<<endl;
	cout<<"Before Swapping: "<< endl <<"a: "<<a<<endl<<"b: "<<b<<endl;
	swap(a,b);
	cout<<"After Swapping: "<< endl <<"a: "<<a<<endl<<"b: "<<b<<endl;

	cout<<"passing by reference with pointers"<<endl;
	cout<<"Before Swapping: "<< endl <<"a: "<<c<<endl<<"b: "<<d<<endl;
	swap(&c,&d);
	cout<<"After Swapping: "<< endl <<"a: "<<c<<endl<<"b: "<<d<<endl;

	return 0;
}
