#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    string str;
    input.open("file.txt");
    int count =0;
    char word[300];
    if(!input)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
        while(!input.eof()){
            input >> word;
            count++;
        }
        cout<<"Total Word: "<<count<<endl;

        input.close();
    return 0;
}