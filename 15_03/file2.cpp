#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    string str;
    input.open("file.txt",ios::in);
    if(!input)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
        while(!input.eof()){
            input >> str;
            cout<<str<<" ";
        }
        cout<<endl;

        input.close();
    return 0;
}