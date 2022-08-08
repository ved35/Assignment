#include<stdio.h>

void main()
{
	int i , j , n=5 , k , a=1 ;
	
	for(i=1 ; i<=n ; i++)
	{
		for(k=i ; k<=n-1 ; k++)
		{
			printf(" ");
		}
		for(j=1 ; j<=2*i-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
