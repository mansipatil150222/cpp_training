#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);
    vector<char>::iterator p;

    int i;
    p=v.begin();
    i=0;
    while(p!=v.end()){
        *p = i + 'a';
        cout<<*p<<" ";
        p++;
        i++;
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }   
}