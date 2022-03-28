#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    char str[]="a##b##c";
    char str1[]="ab#c##d#";
    vector<char> v,v2(30);
    vector<char> vc,vc2(30);
    int i;
    for(int i=0;str[i];i++){
        v.push_back(str[i]);
    }

    for(int i=0;str1[i];i++){
        vc.push_back(str1[i]);
    }
    //remove all spaces
    remove_copy(v.begin(),v.end(),v2.begin(),'#');
    remove_copy(vc.begin(),vc.end(),vc2.begin(),'#');
bool result = equal(v2.begin(),v2.end(),vc2.begin(),vc2.end());
if(result){
    cout<<"same";
}
else{
    cout<<"different";
}
    return 0;
}