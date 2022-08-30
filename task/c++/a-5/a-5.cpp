/*
C++ Program to Display Date using Constructors 
Date Object has been created..............

The Entered Date is :: 31-12-2016
*/
#include<iostream>

using namespace std ;

class Date
{
	int a , b , c ;
	
	public : 
	
	Date(int d , int m , int y)
	{
		a = d ;
		b = m ;
		c = y ;	
		cout<<endl<<"Date obj has been created........."<<endl ;
	}	
	void display()
	{
		cout<<endl<<"The enter date : "<<a<<" : "<<b<<" : "<<c;
	}
};

int main()
{
	int d , m , y ;
	
	cout<<"Enter days : ";
	cin>>d ;
	
	cout<<"Enter month : ";
	cin>>m ;
	
	cout<<"Enter year : ";
	cin>>y ;
	
	Date obj(d , m , y);
	obj.display();
}
