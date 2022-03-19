#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    ifstream input;
    string temp;
    input.open("simple.txt");
    if (!input)
    {
        cout<<"file did't open";
    }
    else{
        while(!input.eof()){
            input>>temp;
            for(int i=0;i<temp.length();i++){
                if(temp[i]=='a' || temp[i]=='A'){
                    count++;
                    break;
                }
            } 
        }
    }
    
    cout<<"total 'a' character in file: "<<count<<endl;

    return 0;
}