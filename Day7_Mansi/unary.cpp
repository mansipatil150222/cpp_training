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
        friend Sample operator--(Sample passed){ //friend function for decrement 
            Sample temp;
            temp.a = --passed.a;
            temp.b = --passed.b;
            return temp;
        }
        friend Sample operator++(Sample passed){ //friend function for increment
            Sample temp;
            temp.a = ++passed.a;
            temp.b = ++passed.b;
            return temp;
        }
}; //end of class
int main(){

    Sample s2, s3(100,100); //object creation of sample class
    s3.display(); //function calling using object
    cout<<"after performing operation:"<<endl;
    cout<<"decrement operation:"<<endl;
    s2 = --s3; // overloading operator and stroring result in another object.
    s2.display(); //function calling using object
    cout<<"increment operation:"<<endl;
    s2 = operator++(s3);// overloading operator and stroring result in another object.
    s2.display(); //function calling using object

    return 0;
}
