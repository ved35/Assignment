/*
C++ Program to find Area of Rectangle using constructor
*/
#include<iostream>

using namespace std;

class Area
{
	int p , q , area ;
	
	public : 
	
	Area(int l , int b)
	{
		p =	l ;
		q = b ;
		area = p * q ;
	}	
	void display()
	{
		cout<<endl<<"Area of Rectangle : "<<area ;
	}
};

int main()
{
	int l , b ;
	
	cout<<"enter l = ";
	cin>>l;
	
	cout<<"enter b = ";
	cin>>b;
	
	Area a(l , b);
	a.display();
}
