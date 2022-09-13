/*
Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class Student
{
	protected :
		int r_n ;
		
	public :
		void number(int n)
		{
			r_n = n ;
		}
};

class test : public Student
{
	protected :
		int math , bio ;
		
	public :
		void mark()
		{
			cout<<"Enter math mark = ";
			cin>>math;
			
			cout<<"Enter bio mark = ";
			cin>>bio;
		}
};

class result : public test
{
	int t ; 
	
	public :
		void total()
		{
			t = math + bio ;
			cout<<"Total mark = "<<t;
		}
};

int main()
{
	int n ;
	cout<<"enter roll no : ";
	cin>>n;
	
	result obj ;
	obj.number(n);
	obj.mark();
	obj.total();
}
