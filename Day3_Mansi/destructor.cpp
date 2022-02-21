#include<iostream>
using namespace std;
class marks{
public:
int maths,science;
marks(){
cout<<"Inside Constructor"<<endl;
cout<<"C++ Object created"<<endl;
}
~marks(){
cout<<"Inside Destructor"<<endl;
cout<<"C++ Object cdestructed"<<endl;
}
};
int main(){
marks m1;
marks m2;
return 0;
}
