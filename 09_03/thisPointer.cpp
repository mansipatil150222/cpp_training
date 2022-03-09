//demo code of this pointer
//when we have same data member name as argument name then to identify passed data this keyword is ised 
#include<iostream>
using namespace std;
class sample{
    int a,b;
    public:
    void input(int a, int b){
        this->a= a+b; //it will take a from parameter
        this->b= a-b; // it will take b from parameter
    }
    void output(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    sample obj1;
    int a=5, b=8;
    obj1.input(a,b);
    obj1.output();
}