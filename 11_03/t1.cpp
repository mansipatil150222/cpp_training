#include<iostream>
using namespace std;
class A{
    public:
    void DisplayA(){
        cout<< "\ndisplay A.\n";
    }
};
class B : public A{
    public:
    
    void DisplayB(){
        cout<< "\ndisplay B.\n";
    }
};
class C : public B{
    public:
    void DisplayC(){
        cout<< "\ndisplay C.\n";
    }
};
class D : public B, public C{
    public:
    void DisplayD(){
        cout<< "\ndisplay D.\n";
    }
};
class E : public C, public D{
    public:
    
    void DisplayE(){
        cout<< "\ndisplay E.\n";
};
class F{
    void DisplayF(){
        cout<< "\ndisplay F.\n";
    }
};
int main(){
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    

}