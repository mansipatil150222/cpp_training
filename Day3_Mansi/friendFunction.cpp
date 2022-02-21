#include<iostream>
using namespace std;
class ABC{
	public:
	int m;
	ABC(){
		m=0;
	}
	friend int add(ABC);
};
class XYZ{
	public:
	int m;
	XYZ(){
		m=0;
	}
	friend int add(XYZ);
};
int add(ABC d1, XYZ d2){
	d1.m +=100;
	d2.m +=200;
	return d1.m+d2.m;
}
int main(){
	ABC a;
	XYZ x;
	cout << "Distance: " <<add(a,x) <<endl;
	return 0;
}
