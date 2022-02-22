//demo code to show operator overloading
#include <iostream>
using namespace std;
class complex{
    int real, img;
    public:
        complex(){//defaulf constructor
            real=0;
            img=0;
        }
        complex(int x, int y){//parameter constructor
            real=x;
            img=y;
        }
        //display values
        void display(){
            cout << "Real Value: "<<real<<"  Imaginary part:"<<img<<endl;
        }

    //overloading the '+' operator here
    complex operator +(complex ob){
        complex temp;
        temp.real=real+ob.real;//add real number from different objects
        temp.img=img+ob.img;// add img number from different object
        return temp;//return addition of elements of two different objects
    }//end of overloading function
    
    //overloading the '-' operator here
    complex operator -(complex ob){
        complex temp;
        temp.real=real-ob.real;
        temp.img=img-ob.img;
        return temp;
    }//end of overloading function
    
    //overloading the '*' operator here
    complex operator *(complex ob){
        complex temp;
        temp.real=real*ob.real;
        temp.img=img*ob.img;
        return temp;
    }//end of overloading function
    
    //overloading the '/' operator here
    complex operator /(complex ob){
        complex temp;
        temp.real=real/ob.real;
        temp.img=img/ob.img;
        return temp;
    }//end of overloading function
    
    //overloading the '%' operator here
    complex operator %(complex ob){
        complex temp;
        temp.real=real%ob.real;
        temp.img=img%ob.img;
        return temp;
    }//end of overloading function


	complex operator++ (){//overloading the '++' operator here
        	complex temp;
		temp.real = ++real;
		temp.img = ++img;
		return temp;
    }//end of overloading function    

    complex operator-- (){//overloading the '--' operator here
        complex temp;
        temp.real = --real;
        temp.img = --img;
        return temp;
    }//end of overloading function

    complex operator &&(complex ob){//overloading the '&&' operator here
        complex temp;
        temp.real = real &&ob.real;
        temp.img = img &&ob.img;
        return temp;
    }//end of overloading function

    complex operator ||(complex ob){//overloading the '||' operator here
        complex temp;
        temp.real = real ||ob.real;
        temp.img = img ||ob.img;
        return temp;
    }//end of overloading function
    complex operator <(complex ob){//overloading the '<' operator here
        complex temp;
        temp.real = real <ob.real;
        temp.img = img <ob.img;
        return temp;
    }//end of overloading function

    complex operator >(complex ob){//overloading the '>' operator here
        complex temp;
        temp.real = real >ob.real;
        temp.img = img >ob.img;
        return temp;
    }//end of overloading function 
    
};//end of complex class

int main(){
    int choice;
    complex c1(1,1), c2(5,10);
    complex c3;
    cout << "1-add \n2-sub\n3-mul\n4-div\n5-mod\n6-increment\n7-decrement\n8-logical AND\n9-logical OR\n10-less then\n11-greater then\nEnter choice: ";
    cin >>choice;
    c1.display();
    c2.display();
    
    switch(choice){
        case 1:
            c3=c1.operator+(c2);
            c3.display();
            break;
            
        case 2:
            c3=c1.operator-(c2);
            c3.display();
            break;
            
        case 3:
            c3=c1.operator*(c2);
            c3.display();
            break;
            
        case 4:
            c3=c1.operator/(c2);
            c3.display();
            break;
            
        case 5:
            c3=c1.operator%(c2);
            c3.display();
            break;

        case 6:
		cout<<"Increment in c1"<<endl;
		++c1;
		c1.display();
		break;
	case 7:
		cout<<"decrement in c2"<<endl;
		--c2;
		c2.display();
		break;
	case 8:
		cout<<"logical and "<<endl;
		c3 = c1.operator&&(c2);
		c3.display();
		break;
	case 9:
		cout<<"logical or "<<endl;
		c3 = c1.operator||(c2);
		c3.display();
		break;
	case 10:
		cout<<"less then"<<endl;
		c3 = c1.operator<(c2);
		c3.display();
		break;
	case 11:
		cout<<"greater then"<<endl;
		c3 = c1.operator>(c2);
		c3.display();
		break;
        defaulf:
            cout<<"Invalid Choice...";
            break;
    }
    return 0;
}
