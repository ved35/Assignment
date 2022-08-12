#include<stdio.h>

void main()
{
	int i , j , k , n=4 ;
	
	for(i=1 ; i<=n ; i++)
	{
		for(k=i ; k<=n-1 ; k++)
		{
			printf(" ");
		}
		for(j=1 ; j<=i ; j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
}
