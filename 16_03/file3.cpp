#include<iostream>
#include<fstream>
using namespace std;
class student{
    public: 
    int roll;
    char name[25];
    float marks;

    void getdata(){
        cout<<"enter roll no and name"<<endl;
        cin>>roll;
        cin>>name;
        cout<<"marks:"<<endl;
        cin>>marks;
    }
    void AddRecord(){
        fstream f;
        student stu;
        f.open("student.dat",ios::in|ios::binary);
        stu.getdata();
        f.write((char*)&stu,sizeof(stu));
        f.close();
        //stu.display();
    }
    void display(){
        fstream f;
        student stu;
        f.open("student.dat",ios::in|ios::binary);
        f.read((char*) &stu, sizeof(stu));
        cout<<"roll "<<stu.roll<<" Name "<<stu.name<<" Marks: "<<stu.marks<<endl;
        f.close();
    }
};
int main(){
    student s1;
    s1.AddRecord();
    s1.display();
    return 0;
}