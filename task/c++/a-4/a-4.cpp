/*
C++ Program to Show Counter using Constructor  

Before calling Counter Function, Count = 0

After calling Counter Function, Count = 1
*/
#include<iostream>

using namespace std;

class clas
{
	int c;
	
	public :
	
	clas(int a)
	{
		c = a ;
		c++ ;
	}	
	void display()
	{
		cout<<"Before Calling function count : "<<c;
	}
};

int main()
{
	int count = 0 ;
	cout<<"Before Calling function count : "<<count<<endl;
	
	clas obj(count);
	obj.display();
}
