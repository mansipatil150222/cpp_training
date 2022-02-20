#include <iostream>
using namespace std;
class ABC{
	private:
	int i=10;
	public:
	ABC(){
		cout<<"default called"<<endl;
	}
	ABC(ABC &obj){
		cout<<"copy called"<<endl;
	}
	void add(ABC ob){
		cout<<"inside add function"<<endl;
	}
	ABC add(){
		ABC temp;
		cout<<"inside add fun which returns"<<endl;
		return temp;
	}
	ABC addret(){
		ABC temp;
		cout<<"inside add fun which returns diff"<<endl;
		return temp;
	}
};
int main(){
	ABC obj1;
	ABC obj2;
	obj2=obj1.add();
	return 0;
}
