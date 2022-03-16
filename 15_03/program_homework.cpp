#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    string str;
    int count=0;
    int line=0;
    int word=0;
    int i;
    input.open("file.txt",ios::in);
    if(!input)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
        while(getline(input,str)){
            
            for(i=0;i<str.length();i++){
                if(str[i]==' ' || str[i]=='\t'){
                  //cout<<str<<" ";
                    count++;
                }
                if(str[i]=='\n'){
                    line++;
                }
            }
        }
        cout<<"space: "<<count<<endl;
        cout<<"Line: "<<line<<endl;
        input.close();
    return 0;
}