// check number is armstrong and perfect number

#include<stdio.h>

int armstrong(int n)
{
	int r ,sum=0;
	
	while(n!=0)
	{
		r = n % 10 ;
		n = n / 10 ;
		sum = sum + (r*r*r);
	}
	return sum ;
}

int perfect(int n)
{
	int i=1 , r , sum=0 ;
	while(i<n)
	{
		if(n%i==0)
		{
			r=i ;
			sum = sum + i ;
		}
		i++;
	}
	return sum;
}

void main()
{
	int num , a , b ;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	a = armstrong(num);
	if(num == a)
	{
		printf("number is armstron\n");
	}
	else
	{
		printf("number is not armstron\n");
	}
	
	b = perfect(num);
	if(num == b)
	{
		printf("number is perfact\n");
	}
	else
	{
		printf("number is not perfact\n");
	}
}
