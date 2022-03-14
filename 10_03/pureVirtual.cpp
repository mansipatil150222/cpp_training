#include<iostream>
using namespace std;
class shape{
    protected:
        float x;
    public:
        void getData(){
            cin>>x;
    
        }
        virtual float calculateArea()=0;
};
class square:public shape{
    public:
    float calculateArea(){
        return x*x;
    }
};
int main(){
    float res;
    square s;
    s.getData();\
    res=3.14*s.calculateArea();
    cout<<res<<endl;
}