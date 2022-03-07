//demo code for multiple inheretence
#include<iostream>
using namespace std;
class person{ //parent class
    int age;
    float hight, width, weight;
    public:
    void talk(){
        cout<<"this is a talk class.\n";
    }
    void walk(){
        cout<<"this is a walk class.\n";
    }
    void eat(){
        cout<<"this is a eat class.\n";
    }
};
class doctor : public person{
    public:
    void profession(){
        cout<<"I am Doctor\n\n";
    }
};
class footballer {
    public:
    void profession1(){
        cout<<"I am footballer\n\n";
    }
};
class businessman : public doctor, public footballer{
    public:
    void profession(){
        cout<<"I am businessman\n\n";
    }
};
//class derived-class-name : access-mode base-class-name{ body of class }
int main(){
    doctor d1;
    footballer f1;
    businessman b1;
    d1.talk(); //calling function of parent class
    d1.walk();
    d1.eat();
    d1.profession();

    b1.talk();
    b1.walk();
    b1.eat();
    b1.profession1();
    return 0;
}