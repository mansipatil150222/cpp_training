//demo program using pointer to derieved class 
#include<iostream>
using namespace std;
class demo{
    int i;
    public:
    demo(){
        
    }
    demo(int x){
        i=x;
    }
    void sh(){}
   int getdata(){
       return i;
    }
};
class derieved: public demo{
    int b;
    public:
    derieved(){
        b=10;
    }

};
int main(){
    //demo d[3]={55,66,77};
    demo *p; //creating pointer object of array 
    demo b;
    derieved d;
    p=&b; //points to base class object
    //we can make ptr to point the object d as follows
    p = &d; //base pointer to derieved class
    return 0;

}