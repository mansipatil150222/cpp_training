#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("file.txt",ios::in);
    if(!myfile)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
    return 0;
}