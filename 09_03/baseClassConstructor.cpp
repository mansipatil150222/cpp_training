//demo program to call base class constructor
//as we are making object of parameterzied constructor it will call only parameterized constructor.
#include<iostream>
using namespace std;
class base{
    protected :
    int i;
    public: 
    base(){
        cout<<"\nbase class default constructor";
    }
    base(int n){
        cout<<"\nbase class parameterized constructor";
    }
    ~base(){
        cout<<"\nbase class default distructor";
    }
};
class base1{
    protected:
    int k;
    public:
    base1(int x){
        k=x;
        cout<<"\nConstructing base2";

    }
};
class derieved: public base, public virtual base1 { //it will call virtual class parameter first
    int j;
    public:
    derieved(int x, int y, int z): base(y),base1(z){ //constructor call of base class with parameters
        j=x;
        cout<<"\nconstructor derived\n";
    }
    ~derieved(){
        cout<<"\nderived distractor";
    }
    void show(){
        cout <<i<< " "<<j<<" "<<k;
    }
};
int main(){
   // derieved d1;
    derieved d2(10, 20, 30);
    d2.show();
}
