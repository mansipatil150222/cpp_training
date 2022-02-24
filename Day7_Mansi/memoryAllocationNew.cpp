#include<iostream>
using namespace std;

int main(){
    float *pt = new float;
    *pt=10;
    cout<<"value="<<*pt<<endl;
    cout<<"address of variable="<<pt<<endl;
    cout<<"size of int variable="<<sizeof(*pt)<<endl;
    cout<<"size of int pointer="<<sizeof(pt)<<endl;
    cout<<"address of int pointer="<<&pt<<endl;
    // space s1(5);
    // s1++;
    // ++s1;
    return 0;
}