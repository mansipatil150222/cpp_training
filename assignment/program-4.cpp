#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    ifstream input;
    string temp;
    input.open("simple.txt");
    if (!input){
        cout<<"file did't open";
    }
    else{
        while(!input.eof()){
            input>>temp;
            int i=temp.length();
            if(temp[i-1]=='S' || temp[i-1]=='s'){
                //cout<< temp <<endl ;
                count++;
            }
        }
    }
    cout<<"total 'a' character in file: "<<count<<endl;
    return 0;
}