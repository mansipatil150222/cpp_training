#include<iostream>
using namespace std;
class space{
    int x;
    public:
        space(){
            x=0;
        }
        space(int a){
            x=a;
        }
        void operator ++(){
            ++x;
            cout<<"Pre Increment="<<x;
        }
        void operator ++(int){
            x++;
            cout<<"Post Increment="<<x;
            
        }
};
int main(){
    space s1(5);
    ++s1;
    s1++;
    return 0;
}