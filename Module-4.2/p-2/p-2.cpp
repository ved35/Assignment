/*
Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance
*/
#include<iostream>
using namespace std ;

class bank
{
	char name[30] ;
	int a_n ;
	char type[10] ;
	int balance ;
	
	public : 
	
	void assign()
	{
		cout<<"enter name : ";
		cin>>name ;
		
		cout<<"Enter accout no. : ";
		cin>>a_n;
	
		cout<<"Enter account type : ";
		cin>>type;
	
		cout<<"Enter balance : ";
		cin>>balance;
	}
	void display()
	{
		cout<<"\n"<<"!...Detail...!"<<"\n";
		cout<<"name : "<<name<<"\n";
		cout<<"account number : "<<a_n<<"\n";
		cout<<"type : "<<type<<"\n";
		cout<<"balance : "<<balance<<"\n";
	}	
	void deposite(int x)
	{
		balance = balance + x ;
	}
	void check_b()
	{
		cout<<"Balance : "<<balance<<"\n" ;
	}
};

int main()
{	
	bank detail ;
	
	detail.assign();
	
	int dep ;
	cout<<"\n"<<"Enter deposite amount : ";
	cin>>dep;
	detail.deposite(dep);
	
	detail.check_b();
	
	detail.display();
}
