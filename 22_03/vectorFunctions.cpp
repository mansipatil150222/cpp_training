#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);

    int i;
    for(i=0;i<10;i++){
        v[i]=i+'a';
    }
    cout<<"Size now ="<<v.size()<<endl;
    cout<<"Content of vector:"<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Iterator begin();
    cout<<endl<<endl;
    cout<< "Expanding vector at from bigin \n";
    v.insert(v.begin()+3,2,'Z');

    cout<<"Size now ="<<v.size()<<endl;
        cout<<"Current Contents:\n";

        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    //Iterator end();
    
    //Bool empty();
    //void push_back(const T& x);
    cout<<endl<<endl;
    cout<< "Expanding vector at the end\n";
    for(i=0;i<10;i++)
        v.push_back(i+ 10 + 'a');

        cout<<"Size now ="<<v.size()<<endl;
        cout<<"Current Contents:\n";

        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //Iterator erase(iterator it);
    cout<<endl<<endl;
    cout<< "Expanding vector at from bigin \n";
    v.erase(v.begin()+1);

    cout<<"Size now ="<<v.size()<<endl;
        cout<<"Current Contents:\n";

        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //Iterator erase(iterator first, iterator last);
    cout<<endl<<endl;
    cout<< "Expanding vector at from bigin \n";
    v.erase(v.begin()+1,v.begin()+3);

    cout<<"Size now ="<<v.size()<<endl;
        cout<<"Current Contents:\n";

        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //void clear()

    cout<<endl<<endl;
    return 0;
}