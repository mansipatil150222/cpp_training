//demo code to show operator overloading
#include <iostream>
using namespace std;
class complex{
    int real, img;
    public:
        complex(){//defaulf constructor
            real=0;
            img=0;
        }
        complex(int x, int y){//parameter constructor
            real=x;
            img=y;
        }
        //display values
        void display(){
            cout << "Real Value: "<<real<<endl<<"Imaginary part:"<<img<<endl<<endl;
        }

    //overloading the '+' operator here
    complex operator +(complex ob){
        complex temp;
        temp.real=real+ob.real;
        temp.img=img+ob.img;
        return temp;
    }//end of overloading function
    
    //destructor
    //~complex(){
        //reset the overloaded operator
        
    //}
};//end of complex class

int main(){
    complex c1(1,1), c2(5,10);
    complex c3;
    c1.display();
    c2.display();
    c3.display();
    cout<<"The action starts here"<<endl;
    //call two objects
    // c3 =c1+c2;
    c3=c1.operator+(c2);
    c3.display();
    
    int i=22, j=10;
    cout<<"Int add:"<<i+j<<endl;
    return 0;
}