#include<iostream>
using namespace std;
class convert{
    protected:
    double val1;
    double val2;
    public:
    convert(double i){
        val1 =i;
    }
    double getconv(){
        return val1;
    }
    double getinit(){
        return val1;
    }
    virtual void compute()=0;
};
class L_to_g:public convert{
    public:
    L_to_g(double i):convert(i){}
    void compute(){
        val2=val1/3.7854;
    }
};
class f_to_c:public convert{
    public:
    f_to_c(double i):convert(i){}
    void compute(){
        val2=(val1-32)/1.8;
    }
};
int main(){
    convert *p;
    L_to_g lgob(4);
    f_to_c fcob(70);

    //use virtual function mechanism to convert
    p=&lgob;
    cout<<p->getinit()<<"litters is ";
    p->compute();
    cout<<p->getconv<"gallons\n";//L_to_g
    p=&fcob;
    cout<<p->getinit()<<"in Fahrenhit is";
    p->compute();
    cout<<p->getconv()<<"celsius\n";//f_to_c

    return 0;
}