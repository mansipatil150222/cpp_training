#include<iostream>
#include<exception>
using namespace std;
void Demo() throw(int, double){
    double a=1;
    if(a==1)
    throw a;

    else if(a==2)
    throw 'A';

    else if(a==1.5)
    throw a;
}

int main(){
    try{
        Demo();
    }
    catch(int n){
        cout<< "int exception cought\n";
    }
    catch (double x){
        cout<<"double exception caught\n";
    }
    catch (char x){
        cout<<"char exception caoght\n";
    }      
    cout<<"end of program\n";
    return 0;
}