#include<iostream>
using namespace std;

template <class X>
X swap1(X &a, X &b){
    X temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"Inside templete swap.\n";
}
void swap1(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside int specalization"<<endl;
}
int main(){
    int i=10, j=20;
    double x=10.1,y=23.3;
    char a='x', b='z';
    cout<<"Original i, j:"<<i<<' '<<j<<'\n';
    cout<<"Original x, y:"<<i<<' '<<j<<'\n';
    cout<<"Original a, b:"<<a<<' '<<b<<'\n';
    swap1(i,j);
    swap1(x,y);
    swap1(a,b);
    cout<<"Original i, j:"<<i<<' '<<j<<'\n';
    cout<<"Original i, j:"<<i<<' '<<j<<'\n';
    cout<<"Original i, j:"<<i<<' '<<j<<'\n';

    return 0;
}
