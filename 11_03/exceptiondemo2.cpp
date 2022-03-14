
#include<iostream>
#include<exception>
using namespace std;
int main(){
    int n1,n2,a;
    cin>>n1;
    cin>>n2;
    //a=n/n2;
    
    try{
        if(n1!=n2){
            float div=(float)n1/n2;
            if(div>0){
                throw div;
            }
                cout<<"n1/n2= "<<div;
                a=n1/n2;
                cout<<"result:"<<a;
        }
        else{
            throw n2;
        }

    }
    catch(int n2){
        cout<<"both number are same:"<<n2;
    }
    catch(char e){
        cout<<"cant devide by zero:"<<e;
    }
    catch(...){
        cout<<"invalid input.";
    }
    cout<<"\nend program";
}