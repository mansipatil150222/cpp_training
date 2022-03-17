/*
templete <class T?
T fun_name (T argument){
    . . . 
    . . .
}
- instead of class name we can use typename
*/
#include<iostream>
using namespace std;
template <typename T>
T sum(T n1, T n2){
    T rs;
    rs = n1+n2;
    return rs;
}
int main(){
    int A=10, B=20, C;
    long a=11, b=22, c;
    c = sum(A,B);
    cout <<"the sum of int: "<<c<<endl;
    c=sum(a,b);
    cout<<"The sum of long: "<<c<<endl;
}