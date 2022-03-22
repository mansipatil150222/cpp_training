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
template <class T,typename U>
void mul(T num1, U num2){
    cout<<"Result "<<num1*num2<<endl;
}
int main(){
    int A=10, B=20;
    long a=11, b=22;
    mul(A,B);
    mul(a,b);
    mul(A,b);
}