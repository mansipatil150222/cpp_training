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
            if(temp=="the" || temp=="THE" || temp == "The"){
                count++;
            }
        }
    }
    
    cout<<"total 'the' word in file: "<<count<<endl;

    return 0;
}