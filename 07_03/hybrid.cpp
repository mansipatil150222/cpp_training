//demo code for hybrid inheretence
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
class footballer: public person {
    public:
    void profession1(){
        cout<<"I am footballer\n\n";
    }
};
class businessman : public doctor, public footballer{
    public:
    void profession2(){
        cout<<"I am businessman\n\n";
    }
};
//class derived-class-name : access-mode base-class-name{ body of class }
int main(){
    doctor d1;
    footballer f1;
    businessman b1;

    b1.profession();
    b1.profession1();
    b1.profession2();
    return 0;
}
