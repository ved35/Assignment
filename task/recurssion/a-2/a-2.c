//calculate the sum numbers from 1 to n using recursion

#include<stdio.h>

int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return (a+sum(a-1));
	}
}

void main()
{
	int n ; 
	
	printf("Emter n = ");
	scanf("%d",&n);
	
	printf("sum of 1 to %d : %d",n,sum(n));
}
