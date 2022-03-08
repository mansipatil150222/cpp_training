#include<iostream>
using namespace std;
class base{
    public:
    int i,j;
    void set(int a, int b){
        i=a;
        j=b;
    }
    void show(){
        cout<<i<<" "<<j;
    }
};
class derieved: public base{
    int k;
    public:
    derieved (int x){
        k=x;
    }
    void showk(){
        cout<<k;
    }
};
int main(){
    derieved ob(3);
    ob.set(1,2);
    ob.show();

    return 0;
}