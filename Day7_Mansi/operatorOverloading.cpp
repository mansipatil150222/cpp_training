//operator overloading
#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:
    space(){
        a=b=c=1;
    }
    space(int x, int y , int z){
        a = x;
        b = y;
        c = z;
    }
    void display(){ //function to print value.
        cout<<"\nx="<<a<<"\ny="<<b<<"\nz="<<c;
    }
    space operator++();
    space operator++(int);
}; // end class
space space ::operator++(){ // overloading pre-increment operator using scope resolution
    space temp;
    cout<<"\n\npre";
    temp.a = ++a; //decrising value of a.
    temp.b = ++b; //decrising value of b.
    temp.c = ++c; //decrising value of c. 
    return temp; // returning object.
}
space space ::operator++(int){ // overloading post-increment operator using scope resolution
    space temp;
    cout<<"\n\npost";
    temp.a = a++; //incresing value of a.
    temp.b = b++; //incresing value of b.
    temp.c = c++; //incresing value of c.
    return temp; //returning object.
}
int main(){
space q2; //object of another class
space q1(5,5,5); //parameterized constructor 
q1.display(); //function calling of another classs using object
q2 = ++q1; //performing operator overloading ans store result in onject
q1.display(); //function calling of another classs using object
q2 = q1++; //performing operator overloading ans store result in onject
q1.display(); //function calling of another classs using object
return 0;

}