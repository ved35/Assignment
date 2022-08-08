#include<stdio.h>

void main()
{
	int i , n , temp=0 , f=0 , p ;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	printf("fibonacci series of given no.=");
	
	for(i=0 ; i<n ; i++)
	{
		if(i == 1)
		{
			f = i ;
			printf("\t%d",f);
		}
		else 
		{
			p = f ;
			f = f + temp ;
			temp = p ;
			printf("\t%d",f);
		}
	}
}
