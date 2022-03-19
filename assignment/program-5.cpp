#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream input;
    string id;
    string name;
    string branch;
    string location;
    int choice;
    string temp;
    string res;


    input.open("database.txt", ios::app|ios::in);
    cout<<"\n1- Add a new student\n2- Find student using ID\n\nEnter your choice:";
    cin>>choice;
    cout<<endl;

    try{
        if(choice==1){
            cout<<"Enter Id: ";
            cin>>id;

            cout<<"Enter name: ";
            cin>>name;

            cout<<"Enter branch: ";
            cin>>branch;

            cout<<"Enter location: ";
            cin>>location;

            string Sdata = id+" "+name+" "+branch+" "+location;
            cout<<"Entered Data: "<<Sdata<<endl;
            input<<id+" "+name+" "+branch+" "+location<<endl;
        }
        else if(choice==2){
            int flag=0;
            string ID;
            cout<<"Enter Id: ";
            cin>>ID;
            try{
                while (!input.eof()){
                    input>>temp;
                    if(temp == ID){
                        flag = 1;
                        getline(input,res);
                    }
                }
                if(flag==1)
                    cout<<"\nStudent Data :"<<res<<endl;
                else
                    throw id;
            }
             catch(int a){
                cout<< "No student found"<<endl;
            }
        }
        else{
            throw choice;
        }
    }
    catch(int x){
        cout<<"Invalid choice...!!"<<endl;
    }
    return 0;
}