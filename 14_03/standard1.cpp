#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
        int myarray[10];
        myarray[11]=10;

    }
    catch(exception &e){
        cout<<"std exception"<<e.what()<<endl;
    }
    return 0;
}
