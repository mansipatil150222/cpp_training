#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
    ofstream outfile;
    outfile.open("data.txt");
    outfile<<"This is my file ";
    long pos = outfile.tellp();
    cout<<pos<<endl;
    outfile.seekp(-7,ios::cur);
    cout<<pos<<endl;
    outfile<<endl<<"random data";
    outfile.seekp(7,ios::beg);
    outfile<<"Again my file.";
    outfile.close();
    cout<<"Done!!"<<endl;

    return 0;
}