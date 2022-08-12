//count of digit of given number

#include<stdio.h>

int digit(int n)
{
	if(n!=0)
	{
		return (1 + digit(n/10));
	}
	else
	{
		return 0 ;
	}
}

void main()
{
	int num ;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("Total digit : %d",digit(num));
}
