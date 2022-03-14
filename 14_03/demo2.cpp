#include<iostream>
using namespace std;
class Test{
    int x;
    public:
    void read(){
        cout<<"Enter a Number=";
        cin>>x;
    }
    class EVEN{};
    class ODD{};
    void check(){
        if(x%2==0){
            throw EVEN();
        }
        else{
            throw ODD();
        }
    }
};
int main(){
    Test t;
    t.read();
    try{
        t.check();
    }
    catch(Test::EVEN){
        cout<<"Number is Even";
    }
    catch(Test::ODD){
        cout<<"Number is Odd";
    }
    return 0;
}