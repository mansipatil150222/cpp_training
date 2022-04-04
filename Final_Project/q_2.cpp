#include <iostream>
#include<string>
using namespace std;
class charInput{
    string data;
    public:
    void add(char c){
        data +=c;
    }
    string getValue(){
        return data;
    }
};
class numInput: public charInput{ //inheriting base class
    string data;
    public:
    void add(char c){
        if(c>='0' && c<='9'){
            data +=c;
        }
    }
    string getValue(){
        return data;
    }
};
int main(){
    numInput* in = new numInput(); //creating object of numInput class
    string inp;
    cout<<"Input:";
    cin>>inp;
    int l=inp.length();
    for(int i=0;i<l;i++){
        in->add(inp[i]); //it will add character by character
    }
    cout<<"Output:"<<in->getValue()<<endl;
    return 0;
}
