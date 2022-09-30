/*
Write a Program of Two 1D Matrix Addition using Operator Overloading 
*/
#include<iostream>
using namespace std;

#define N 2

class matrix
{
	int a[10];
	public:
		void accptValue()
		{
   			for (int i = 0; i < N; i++)
    		{
   		    	cout<<"Enter val:";
    	    	cin>>a[i];
    		}
		}

		void display()
		{
			for(int i=0 ; i<N; i++)
    		{
     		   cout<<a[i]<<"\t";
    		}
    		cout<<endl;
		}

		void operator+(matrix m)
		{
    		int temp[10];
    		
    		for (int i = 0; i < N; i++)
    		{
    		    temp[i]=a[i]+m.a[i];
    		    //cout<<a[i]<<"+"<<m.a[i]<<endl;
    		}
    		
    		cout<<"sum matrix :";
    
    		for (int i = 0; i < N; i++)
    		{
    		    cout<<temp[i]<<"\t";
    		}
		}
};

int main()
{
    matrix val1;
    matrix val2;
    
    cout<<"enter matrix 1 value :-- "<<endl;
    val1.accptValue();
    
    cout<<"enter matrix 2 value :-- "<<endl;
    val2.accptValue();
    
    cout<<" matrix 1 value :-- ";
    val1.display();
    
    cout<<" matrix 2 value :-- ";
    val2.display();
    
    val1+val2;
}
