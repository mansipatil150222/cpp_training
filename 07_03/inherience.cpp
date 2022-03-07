//demo code for inheretence
#include<iostream>
using namespace std;
class person{ //parent class
    public:
    int a1;
    void fun1(){
        cout<<"Inheritated public.\n";
    }
    protected:
    int a2;
    void fun2(){
        cout<<"protected.\n";
    }
    private: 
    int a3;
    void fun3(){
        cout<<"Private.\n";
    }
};
class doctor : public person{
    public:

    void profession(){
        cout<<"I am Doctor\n\n";
       return fun2();
    }
};
class footballer : public person{
    public:
    void profession(){
        cout<<"I am footballer\n\n";
    }
};
class businessman : public person{
   // person p1;
    //p1.fun1();
    public:
    void profession(){
        cout<<"I am businessman\n\n";
    }
};
//class derived-class-name : access-mode base-class-name{ body of class }
int main(){
    doctor d1;
    d1.profession();
    footballer f1;
    businessman b1;
    //d1.fun2(); //calling function of parent class
   /* d1.fun2();
    d1.fun3();
    d1.profession();

    f1.fun1();
    f1.fun2();
    f1.fun3();
    f1.profession();

    b1.talk();
    b1.walk();
    b1.eat();
    b1.profession();*/
    return 0;
}