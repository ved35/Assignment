//WAP to find factorial using recursion

#include<stdio.h>

int fact(int f)
{
	if(f==0)
	{
		return 1 ;
	}
	else
	{
		return (f*fact(f-1));
	}	
}
void main()
{
	int n ;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("Factorial of %d : %d",n,fact(n));
}
