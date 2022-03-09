//demo program to call objects using pointer
#include<iostream>
using namespace std;
class demo{
    int i;
    public:
    demo(int x){
        i=x;
    }
   int getdata(){
       return i;
    }
};
int main(){
    demo d[3]={55,66,77};
    demo *p=d; //creating pointer object of array 
    for(int i=0;i<3;i++){
        cout<<p->getdata()<<endl; //call function of another class using pointer
        p++; //increment value of pointer
    }
    return 0;

}