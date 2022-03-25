//Mansi Patil
// CPP Program to implement Deque in STL
#include <deque>
#include <iostream>
int max_ele,min_ele;
using namespace std;

void DisplayQueue(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); it++)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	deque<int> gquiz;
    int nq,ns;
    cout<<"enter size of queue:";
    cin>>nq;
    cout<<"\nEnter size of subset:";
    cin>>ns;
    for(int i=1;i<=nq;i++){
        cin>>i;
        gquiz.push_back(i);
    }

	DisplayQueue(gquiz);

    int subset[nq/ns][ns];
    for(int i=0;i<nq/ns;i++){
        for(int j=0;j<ns;j++){
            subset[i][j]=gquiz.front();
            gquiz.pop_front();
        }
    }
    cout<<"subsets:"<<endl;
    for(int i=0;i<nq/ns;i++){
        for(int j=0;j<ns;j++){
            cout<<subset[i][j]<<" ";
        }
        cout<<endl;
    }

    //sort(gquiz[0].begin(), gquiz[0].end());

    
	return 0;
}
