#include<iostream>
#include<exception>
using namespace std;
int main(){
    int n1,n2,a;
    n1=10;
    n2=0;
    //a=n/n2;
    
    try{
        if(n2==0){
            throw n2;
        }
        else{
            a=n1/n2;
            cout<<"result:"<<a;
        }

    }
    catch(int x){
        cout<<"cant devide by zero:"<<x;
    }
    cout<<"\nend program";
}