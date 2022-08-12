// print fibonacci series

#include<stdio.h>

int fibbo(int n)
{
	if(n == 0)
	{
		return 0 ;
	}
	else if(n == 1)
	{
		return 1 ;
	}
	else
	{
		return (fibbo(n-1)+fibbo(n-2));
	}
}

void main()
{
	int n , i;
	
	printf("enter n=");
	scanf("%d",&n);
	
	printf("Fibonacci series : ");
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",fibbo(i));
	}
}
