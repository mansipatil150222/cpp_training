#include<iostream>
using namespace std;
namespace CounterNameSpace{
    int upperbound;
    int lowerbound;
    class counter{
        int count;
        public:
        counter(int n){
            if(n<=upperbound)
                count = n;
            else   
                count = upperbound;
        }//end counter
        void reset(int n){
            if(n <= upperbound)
                count = n;
        }//end reset
        int run(){
            if(count>lowerbound)
                return count--;
            else
                return lowerbound;
        }//end run
    };//end class
}
int main(){
    CounterNameSpace::upperbound=100;
    CounterNameSpace::lowerbound=0;
    CounterNameSpace::counter ob1(10);
    int i;
    do{
        i=ob1.run();//once object is created we don't need ::
        
    }while(i> CounterNameSpace::lowerbound);
    cout<<i<<" ";
    cout<<endl;
    CounterNameSpace::counter ob2(20);
    do{
        i=ob2.run();
        
    } while(i>CounterNameSpace::lowerbound);
    cout<<i<<" ";
    cout<<endl;
    ob2.reset(100);
    CounterNameSpace::lowerbound=90;
    do{
        i=ob2.run();
        
    }while(i>CounterNameSpace::lowerbound);
    cout<<i<<" ";
    return 0;
}