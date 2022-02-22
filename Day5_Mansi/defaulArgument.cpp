// code to demo default arguments
#include<iostream>
using namespace std;

 int cubeVolume(int l=5, int b=6, int h=7){
    return l*b*h;
}
int main(){
    // cubeVolume();
    
cout << "cube Volume:" << cubeVolume(5) <<endl;
cout << "cube Volume :" << cubeVolume(5,5) <<endl;
cout << "cube Volume :" << cubeVolume(5,5,5) <<endl;
return 0;
}