/*
Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		
	public:
		void per(int a, string n)
		{
			name = n;
			age = a;
		}
		void d_p()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}	
};

class Student: Person
{
	private:
		float percentage;
		
	public:
		void stud(string n, int a, float p)
		{
			percentage = p;
			per(a,n);
		}
		void d_s()
		{
			cout<<"!.......Student details are.......! \n"<<endl;
			d_p();
			cout<<"Prcentage is: "<<percentage<<endl<<endl;
		}
};
class  Teacher: Person
{
	private:
		float salary;
		
	public:
		void teach(string n, int a, float s)
		{
			salary = s;
			per(a,n);
		}
		void d_t()
		{
			cout<<"!.......Teachers details are.......!\n"<<endl;
			d_p();
			cout<<"Salary: "<<salary<<endl;
		}
};


int main()
{
	Student s;
	s.stud("abc", 17,80);
	s.d_s();
	Teacher t;
	t.teach("xyz", 25,25000);
	t.d_t();
}
