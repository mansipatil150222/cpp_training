#include<iostream>
using namespace std;
#include<string.h>
#include<map>
class name{
    char str[40];
    public:
    name(){
        strcpy(str,"");
    }
    name (char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

bool operator<(name a, name b){
    return strcmp(a.get(),b.get())<0; //true/false
}
class phoneNum{
    char str[80];
    public:
    phoneNum(){
        strcmp(str,"");
    }
    phoneNum(char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};
int main(){
    map<name, phoneNum>directory;
    //put names and numbers into map
    directory.insert(pair<name, phoneNum>(name("Emp1"),phoneNum("555-1111")));
    directory.insert(pair<name, phoneNum>(name("Emp2"),phoneNum("555-2222")));
    directory.insert(pair<name, phoneNum>(name("Emp3"),phoneNum("555-3333")));
    directory.insert(pair<name, phoneNum>(name("Emp4"),phoneNum("555-4444")));

    //given a name, find number

    char str[80];
    cout<<"Enter name: ";
    cin>>str;
    map<name,phoneNum>::iterator p;
    p=directory.find(name(str));
    if(p!=directory.end())
        cout<<"Phone number:"<<p->second.get();
    else 
        cout<<"Name not in directory.\n";
        return 0;
}