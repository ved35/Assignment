/*
++ Program to Show Overload Constructor Example  


Value of a: 5

Value of b: 0

Value of c: 0


Value of a: 0

Value of b: t

Value of c: 0


Value of a: 0

Value of b: 0

Value of c: 3.14


Value of a: 4

Value of b: y

Value of c: 3.45
*/
#include<iostream>

using namespace std ;

class Class
{
	int a ;
	char b ;
	float c ;
	
	public :
	
	Class(int p , char q ,float r)	
	{
		a = p ;
		b = q ;
		c = r ;	
	}
	void display()
	{
		cout<<endl<<"Value of a = "<<a;
		cout<<endl<<"Value of b = "<<b;
		cout<<endl<<"Value of c = "<<c<<endl;
	}
};

int main()
{
	Class obj1(5 , '0' , 0);
	obj1.display();
	
	Class obj2(0 , 't' , 0);
	obj2.display();
	
	Class obj3(0 , '0' , 3.14);
	obj3.display();
	
	Class obj4(4 , 'y' , 3.45);
	obj4.display();
}
