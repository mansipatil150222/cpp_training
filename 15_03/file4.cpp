#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    string str, str2,str3;
    input.open("file.txt");
    if(!input)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
        while(!input.eof()){
            input >> str >> str2 >> str3;
            cout<<str<<'\t'<<str2<<'\t'<<'\t'<<str3<<endl;
        }
        cout<<endl;

        input.close();
    return 0;
}