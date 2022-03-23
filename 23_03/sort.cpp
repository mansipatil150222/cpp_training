#include <list>
#include <iostream>
using namespace std;
int main()
{
    list<int> lst1, lst2;
    int i;
    for (i = 0; i < 10; i += 2)
        lst1.push_back(rand() % 20);
    for (i = 0; i < 11; i += 2)
        lst2.push_back(rand() % 20);
    cout << "Contents of list1:\n";
    list<int>::iterator p = lst1.begin();
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << endl;
    //sort the list
    lst1.sort();
    p = lst1.begin();
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    //now, merge the list1 and list2 into list1
    lst1.merge(lst2);
    if(lst2.empty())
    cout<<"\nlist2 is now empty\n";
    cout<<"Contentsof lst1 after merge:\n";
    p=lst1.begin();
    while(p!=lst1.end()){
        cout<<*p<<" ";
        p++;
    }

    lst1.sort();
    p = lst1.begin();
    cout<<endl<<"sorted list:"<<endl;
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}