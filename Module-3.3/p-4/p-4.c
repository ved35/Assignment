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
	 	f*fact(f-1);
		printf("\n%d",f);
	}	
}
void main()
{
	int n ;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("\n\nFactorial of %d : %d",n,fact(n));
}
