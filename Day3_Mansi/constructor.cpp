#include<iostream>
using namespace std;
class Demo{
	private:
	int feet, inch;
	public:
//Default Constructor
	Demo(){
		feet=10;
		inch=100;
		cout<<"Deault Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
//parameterized Constructor
	Demo(int f, int i){
		feet=f;
		inch=i;
		cout<<"Parameterized Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
//copy Constructor
	Demo(Demo &x){
		feet=x.feet;
		inch=x.inch;
		cout<<"Copy Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
};
int main(){
	Demo d1;
	Demo d2(20,30);
	Demo d3=d1;
	Demo d4=d2;
}
