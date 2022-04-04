#include<iostream>
using namespace std;
int main()
{
    int l,b,area,area1;
    //take length and breath as an input from the user
    cout<<"Enter Length:";
    cin>>l;
    cout<<endl<<"Enter Breath:";
    cin>>b;
    //find area of chocolate
     area = l * b;
     //find no. of equal parts of chocolate
    for (int i = 1; i <= l && i <= b; i++){
        if (l % i == 0 && b % i == 0){
            area1 = area / (i * i);
        }
    }
    cout<<"equal Parts:"<<area1<<endl;
    return 0;
}
