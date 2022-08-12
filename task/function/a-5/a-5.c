//check number is prime or not

#include<stdio.h>

void prime(int a)
{
	int i , c=0 ;
	
	for(i=1 ; i<=a ; i++)
	{
		if(a%i==0)
		{
			c++ ; 
		}
	}
	if(c==2)
	{
		printf("number is prime.");
	}
	else
	{
		printf("number is not prime.");
	}
}

void main()
{
	int n ; 
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	prime(n);
}
