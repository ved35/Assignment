//squre of any no. using fuction

#include<stdio.h>

int squre(int a)
{
	return (a*a);
}

void main()
{
	int n ;
	
	printf("Enter number = ");
	scanf("%d",&n);
	
	printf("Squre of %d = %d",n,squre(n));
}


