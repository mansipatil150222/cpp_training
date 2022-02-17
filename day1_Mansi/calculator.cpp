#include<iostream>

using namespace std;

class Calculator{
    public:
        int inp1, inp2;
        void setInput(int a, int b){
            inp1 = a;
            inp2 = b;
        }
        int add(){
            return inp1+inp2;
        }
        int sub(){
            return inp1-inp2;
        }
        int mul(){
            return inp1*inp2;
        }
        int div(){
            return inp1/inp2;
        }
};

int main(){
    int a, b;
    cout << "enter the number 1: ";
    cin >> a;
    cout << "\nenter the number 2: ";
    cin >> b;
    Calculator obj1;
    obj1.setInput(a,b);

    cout << "\nenter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    int op;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nsum of the inputs is: " << obj1.add() << "\n";
        break;
    case 2:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nsubtraction of the inputs is: " << obj1.sub() << "\n";
        break;
    case 3:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nmultiplication of the inputs is: " << obj1.mul() << "\n";
        break;
    case 4:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\ndivision of the inputs is: " << obj1.div() << "\n";
        break;
    
    default:
        break;
    }



    return 0;
}