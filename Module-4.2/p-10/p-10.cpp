/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/
#include<iostream>
using namespace std;
       
class A
{
    int a,b;
    public:
        void calc()
		{
            cout<<"enter a:";
            cin>>a;
            cout<<"enter b:";
            cin>>b;
            cout<<"sum:"<<a+b<<endl;
        }
        void calc(int x,int y)
		{
            cout<<"multiplication:"<<x*y<<endl;
        }
        void calc(double x,int y)
		{
            cout<<"sub:"<<x-y<<endl;
        }
        void calc(int x,double y)
		{
            cout<<"div:"<<x/y<<endl;
        }
};

int main()
{
    A a;
    a.calc();
    a.calc(10,20);
    a.calc(10.2,2);
    a.calc(10,2.5);
}
