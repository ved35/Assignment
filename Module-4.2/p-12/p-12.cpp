/*
Write a program to swap the two numbers using friend function without 
using third variable
*/

#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
	A()
	{
   		cout<<"a : ";
   		cin>>a;
   		
   		cout<<"b : ";
    	cin>>b;
	}
	friend void swap(A obj);
};
void swap(A obj)
{
    obj.a=obj.a*obj.b; 
    obj.b=obj.a/obj.b;
    obj.a=obj.a/obj.b;
    cout<<"after swapping: "<<endl<<"a = "<<obj.a<<"\t"<<"b = "<<obj.b<<endl;
}

int main()
{
    A obj2;
    swap(obj2);
}
