/*
C++ program to Display Student Details using constructor and destructor *

This is Student Details constructor called...........

Enter the student Name :: CodezClub

Enter the student roll no :: 123

Enter the student address :: India

Enter the Zipcode :: 100215

The Entered Student Details are shown below ::----------

Student Name :: CodezClub

Roll no   is :: 123

Address is :: India

Zipcode is :: 100215

Student Detail is Closed......
*/

#include<iostream>

using namespace std ;

class Student
{
	int n , z_c ;
	string name ;
	string address ;
	
	public :
	
	Student()
	{
		cout<<"This is Constructor called......."<<endl;
		cout<<endl<<"Enter the student name : ";
		cin>>name ;
		
		cout<<"Enter the student roll no. : ";
		cin>>n ;
		
		cout<<"Enter the student address : ";
		cin>>address;
		
		cout<<"Enter the student zip-code :";
		cin>>z_c;
	}
	void display()
	{
		cout<<endl<<"The entered student details are shown below : .......";
		
		cout<<endl<<"Enter the student name : "<<name;
		cout<<endl<<"Enter the student roll no. : "<<n;
		cout<<endl<<"Enter the student address : "<<address;
		cout<<endl<<"Enter the student zip-code :"<<z_c;
	}
	~Student()
	{
		cout<<endl<<"Student Details closed.......";
	}	
} ;

int main()
{
	Student obj ;
	obj.display();
}





















