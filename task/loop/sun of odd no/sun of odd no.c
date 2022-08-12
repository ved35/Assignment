#include<stdio.h>

void main()
{
	int i , n , num=1 , sum = 0;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	printf("The odd number are = ");
	
	for(i=1 ; i<=n ; i++)
	{
		printf("\t%d",num);
		sum = sum + num ;
		num = num + 2 ;		
	}
	printf("\nThe sum of odd natural = %d",sum);
}
