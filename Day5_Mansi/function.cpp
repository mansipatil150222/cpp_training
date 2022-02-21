// code to function overloading
#include<iostream>
using namespace std;
int  sum(int i){
    return i;
}
float  sum(int i, float j){
    return (i+j);
}
int  sum(int i, int j, int k){
    return (i+j+k);
}
string sum(string a, char b){
    return a+b;
}
int main(){
    cout << "Sum:" << sum(5) <<endl;
    cout << "Sum:" << sum(4,5.5) <<endl;
    cout << "Sum:" << sum(4,5,6) <<endl;
    cout <<"String:" << sum("Mans",'i')<<endl;
    return 0;
}