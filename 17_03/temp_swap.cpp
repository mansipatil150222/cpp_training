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
template <typename T, class P>
T swap(T *n1, P *n2){
    T rs;
    rs=*n1;
    *n1=*n2;
    *n2=rs;
    
}
int main(){
    double A=10.10;
    int B=20.20;
    string a="mansi", b="patil";
    
    cout <<"Before Swap: \nA= "<<A<<endl<<"B= "<<B<<endl;
    //cout <<"After Swap: \nA= "<<A<<endl<<"B= "<<b<<endl;
    swap(&A,&B);
    //wap(a,b);
    cout <<"After Swap: \nA= "<<A<<endl<<"B= "<<B<<endl;
    //cout <<"After Swap: \nA= "<<A<<endl<<"B= "<<b<<endl;

}