/*
Write a program to print the names of students by creating a Student class. 
If no name is passed while creating an object of the Student class, 
then the name should be "Unknown", otherwise the name should be equal to the String value passed 
while creating the object of the Student class.
*/

#include<iostream>

using namespace std;

class Student
{
	string name = "Unknown";
	
	public :
	void print()
	{
		cout<<"\n"<<"student name : "<<name ;
	}
	void print(char name[])
	{
		cout<<"\n"<<"student name : "<<name ;
	}
};

int main()
{
	char n[10]="ved";
	Student obj;
	obj.print(n);
	obj.print();
}
