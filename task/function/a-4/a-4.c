/* find the sum of series

1!/1 + 2!/2 + 3!/3 + ... + n!/n */

#include<stdio.h>

int s_sum(int a)
{
	int i , sum=0;
	for(i=1 ; i<=a ; i++)
	{
		sum = sum + fact(i)/i ;
	}
	return sum ;
}

int fact(int b)
{
	int j , f=1;
	for(j=1 ; j<=b ; j++)
	{
		f = f * j ;
	}
	return f ;
}

void main()
{
	int n ;
	printf("enter the limit number of series : ");
	scanf("%d",&n);
	
	printf("sum=%d",s_sum(n)); 
}
