//demo program to unary operator overloading using friend function.

#include<iostream>
using namespace std;

class Sample{
    int a, b;
    public:
        Sample(int x=0, int y=0){ //parameterized constructor
            a = x;
            b = y;
        }
        void display(){
            cout<<"a = "<<a<<","<<"b = "<<b<<endl;
        }
        friend Sample operator--(Sample passed){ //friend function
            Sample temp;
            temp.a = --passed.a;
            temp.b = --passed.b;
            return temp;
        }
}; //end of class
int main(){

    Sample s1(10,20), s2, s3(100,100); //object creation of sample class
    s1.display(); //function calling using object

    s2 = --s3; // overloading operator and stroring result in another object.
    s2.display(); //function calling using object

    return 0;
}