#include<iostream>
#include<exception>
using namespace std;
int main(){
    int n1,n2,a;
    n1=10;
    n2=0;
    a=2;
    //a=n/n2;
    
    try{
        if(a==1){
            throw a;
        }
        else if(a==2){
            throw 'A';
        }
        else if(a==3){
            throw 4.5;
        }

    }
    catch(int a){
        cout<<"Integer exception caught"<<a;
    }
    catch(char ch){
        cout<<"character exception caught"<<a;
    }
    catch(double d){
        cout<<"Double exception caught"<<a;
    }
    cout<<"\nend program";
}