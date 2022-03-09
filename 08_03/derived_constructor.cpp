#include<iostream>
using namespace std;
class base{
    int x;
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
class derieved: public base{
    int y;
    public:
    derieved(){
        cout<<"\nderieved default constructor";
    }
    derieved(int i){
        cout<<"\nderieved parameterized constructor";
    }
    ~derieved(){
        cout<<"\n derived distractor";
    }
};
int main(){
    base b;
    derieved d1;
    derieved d2(10);
}