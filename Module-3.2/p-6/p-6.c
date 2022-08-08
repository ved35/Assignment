#include<stdio.h>

void main()
{
	int i , j , n=5 , a=1 ;
	
	for(i=1 ; i<=2*n ; i++)
	{
		if(i<=5)
		{
			for(j=1 ; j<=i ; j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=i ; j<=2*n-1 ; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
