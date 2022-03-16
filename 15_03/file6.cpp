#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream input, output;
    string str;
    input.open("file.txt");
    output.open("output5.txt");
    char ch;
    if(!input)
        cout<<"this file can't open"<<endl;
    else{
        cout<<"File opened successfully!"<<endl;
        /*while(!input.eof()){
            input.get(ch);
            output<<ch;
        }*/
         while(getline(input,str)){
            output<<str<<endl;
        }
        cout<<"copy done!!"<<endl;
    }
        input.close();
        output.close();
    return 0;
}