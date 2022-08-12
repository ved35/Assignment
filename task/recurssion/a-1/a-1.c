//WAP to print first 50 natural number using recursion

#include<stdio.h>

int natural(int n)
{
	if(n<=50)
	{
		printf("\t%d",n);
		natural(n+1);		
	}
}
void main()
{
	int n=1;
	
	printf("first 50 natural number : ");
	natural(n);
}
