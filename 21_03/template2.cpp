#include<iostream>
using namespace std;
template<typename T>
void fun(const T &x){
    static int i=10;
    cout<< ++i<<endl;
    return;
}
int main(){
    fun<int>(1);
    fun<int>(3);
    fun<double>(10.1);
    fun<double>(20.1);
    fun<double>(10.1);
    fun<int>(3);
    fun<int>(3);
    fun<int>(3);
    fun<double>(10.1);
    return 0;
}