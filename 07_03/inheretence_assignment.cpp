// assignment program of getting roll number and name from student class, marks of 5 subkect in test class and print roll no, name, total, percentage in result class.
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int r;
    string n;
    void get_details(){
        cout<<"\nEnter roll number: ";
        cin>>r;
        cout<<"\nEnter Name: ";
        cin>>n;
        
    
    }
};
class test{
    public:
    int m[5];
    void get_marks(){
        cout<<"\nEnter marks of 5 subject: ";
        for(int i=0;i<5;i++){
            cin>>m[i];
        }
       
    }
};
class Result : public student, public test{
    public:
    int total, per;
    void printInfo(){
        for(int i=0;i<sizeof(m)/sizeof(int);i++)
            total += m[i];
        per=total/5;
        cout<<"\nRoll No: "<<r<<"\nName: "<<n<<"\nTotal: "<<total<<"\nPercentage: "<<per;
    }
};
int main(){
    Result xyz;
    xyz.get_details();
    xyz.get_marks();
    xyz.printInfo();
    return 0;
    }