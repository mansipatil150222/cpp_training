#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //line onhell0 World data
    fstream fp;
    char buf[100];
    int pos;
    fp.open("data.txt",ios::out|ios::ate);
    cout<<"writing to a file"<<endl;
    fp<<"line one"<<endl;
    fp<<"line two"<<endl;
    pos=fp.tellp();
    cout<<"current position:"<<pos<<endl;
    fp.seekp(-7,ios::cur);
    fp<<endl<<"random data";
    fp.seekp(7,ios::beg);
    fp<<"hell0 World";
    fp.close();
    cout<<"done writting."<<endl;
    fp.open("data.txt");
    cout<<"Reading the file"<<endl;
    fp.seekg(0);
    while(fp.getline(buf,100)){
        cout<<buf<<endl;
    }
    pos=fp.tellg();
    cout<<"pos pointer at:"<<pos<<endl;
    return 0;
}