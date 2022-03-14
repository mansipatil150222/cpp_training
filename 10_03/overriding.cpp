//demo program of over riding
#include<iostream>
using namespace std;
class ABC{
    public:
    void display(){
        cout<<"parent class\n";
    }
};
class XYZ:public ABC{
    public:
    void display(){
        cout<<"child class\n";
    }
};
int main(){
    XYZ x;
    x.display();//display function of same clas    x.ABC::display();//scoperesolution operator is used to access the same function from parent class
}