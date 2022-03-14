#include<iostream>
#include<exception>
using namespace std;
int main(){
    int n1,n2,a;
    n1=10;
    n2=0;
    a=1;
    //a=n/n2;
    
    try{
        try{
            
            throw a;
        }
        catch(int x){
            cout<<"Exception in inner try-catch block.\n";
            throw x;
        }

    }
    catch(int a){
        cout<<"Exception in outer try-catch block.\n"<<a;
    }
    cout<<"\nend program";
}