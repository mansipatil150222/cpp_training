#include <iostream>
using namespace std;

int& max(int &x,int &y){
	if(x>y){
		return (++x);
	}
	else{
		return (++y);
	}
}
int main(){
	int a=5,b=6,result;
	result=max(a,b);
	cout << "Max: "<<result<<endl;
	return 0;
}
