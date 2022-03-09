#include<iostream>
using namespace std;
class student{
    int marks;
    string name;
    public:
    int rollno;
    void getdata(string n,int m, int roll){
        name = n;
        marks=m;
        rollno = roll;
    }
    void printdata(){
        cout<<"Name: "<<name<<" Rollno: "<<rollno<<" Marks: "<<marks<<endl;
    }
};
int main(){
    student d[3];
    student *ptr = d;

    ptr->getdata("mansi",100,7);
    ptr++;
    ptr->getdata("krinal",99,8);
    ptr++;
    ptr->getdata("khushi",98,9);
    ptr++;

    ptr=&d[0];
    for(int i=0;i<3;i++){
        ptr->printdata();
        ptr++;
    }
    return 0;
}