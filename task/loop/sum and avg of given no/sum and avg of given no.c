#include<stdio.h>

void main()
{
	int i , n ,sum = 0 ;
	float avg ;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		sum = sum + i ;
	}
	avg = (float)sum / n ;
	
	printf("The sum of %d no is : %d",n,sum);
	printf("\nThe average is : %f",avg);
}
