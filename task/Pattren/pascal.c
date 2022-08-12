#include<stdio.h>

void main()
{
	int i , j , k , n=5 , a=1;
	
	for(i=0 ; i<n ; i++)
	{
		for(k=i ; k<=n-1 ; k++)
		{
			printf(" ");
		}
		
		for(j=0 ; j<=i ; j++)
		{
			if(j==0)
			{
				a=1;
			}
			
			else
			{
				a = a*(i-j+1)/j ;
			}
			printf(" %d",a);
		}
		printf("\n");
	}
}
