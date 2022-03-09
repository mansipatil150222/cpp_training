//point and objects
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
    demo *p=d;
    for(int i=0;i<3;i++){
        cout<<p->getdata()<<endl;
        p++;
    }
    return 0;

}