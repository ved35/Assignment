// given number is odd or even

#include<stdio.h>

void o_e(int a)
{
	if(a%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("number is odd");
	}
}

void main()
{
	int n ; 
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	o_e(n);
}
