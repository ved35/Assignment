#include<stdio.h>

void main()
{
	int i , j , k , n=5 ;
	
	for(i=1 ; i<=n ; i++)
	{
		int a = 1 ;
		for(k=i ; k<=n-1 ; k++)
		{
			printf(" ");
		}
		for(j=1 ; j<=2*i-1 ; j++)
		{
			if(i==j)
			{
				printf("%d",i);
				a = i ;
			}
			else if(j==1)
			{
				printf("%d",j);
			}
			else if(i<j)
			{
				a--;
				printf("%d",a);
			}
			else
			{
				a++;
				printf("%d",a);
			}
		}
		printf("\n");
	}
}
