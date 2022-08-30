/*
C++ Program to enter student details using Class  

Record of student 1 :: -----------------

Marks =730

Grade = A

Record of student 2 :: -----------------

Marks =621

Grade = B
*/
#include<iostream>

using namespace std ;

class Student
{
	int m ;
	char g ;
	
	public :
	
	void enter(int i)
	{	
		cout<<endl<<"Record of student : "<<i<<endl ;
		
		cout<<endl<<"Mark = ";
		cin>>m; 
		
		cout<<endl<<"Grade = ";
		cin>>g;
	}	
};

int main()
{
	int i , mark , grade ;
	
	Student obj ;

	for(i=1 ; i<=2 ; i++)
	{
		obj.enter(i);
	}
}
