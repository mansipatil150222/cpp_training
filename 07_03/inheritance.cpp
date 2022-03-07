//demo code for inheretence
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
class footballer : public person{
    public:
    void profession(){
        cout<<"I am footballer\n\n";
    }
};
class businessman : public person{
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

    f1.talk();
    f1.walk();
    f1.eat();
    f1.profession();

    b1.talk();
    b1.walk();
    b1.eat();
    b1.profession();
    return 0;
}