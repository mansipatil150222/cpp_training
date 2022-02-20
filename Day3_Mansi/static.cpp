#include<iostream>
using namespace std;
class staticMember{
	private:
		static int A;
		static int B;
		static int C;
	public:
		static void display(){
			A+=10;
			B+=20;
			C+=30;
			cout<<"Value of A: "<< A << endl;
			cout<<"Value of B: "<< B << endl;
			cout<<"Value of C: "<< C << endl;
		}
};
int staticMember :: A;
int staticMember :: B;
int staticMember :: C;

int main(){
	cout << "Print static member through class name: " << endl;
	staticMember::display();
	cout << "Print static member through class name: " << endl;
	staticMember::display();

	return 0;
}
