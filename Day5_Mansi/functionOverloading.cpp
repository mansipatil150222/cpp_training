// code to function overloading

#include<iostream>
using namespace std;
int  sum(int i){
    return i;
}
int  sum(int i, int j){
    return (i+j);
}
int  sum(int i, int j, int k){
    return (i+j+k);
}

int main(){
cout << "Sum:" << sum(5) <<endl;
cout << "Sum:" << sum(4,5) <<endl;
cout << "Sum:" << sum(4,5,6) <<endl;
return 0;
}
