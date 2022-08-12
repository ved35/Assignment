#include<stdio.h>

void main()
{
	int i , n , sum = 0 , avg ;
	
	printf("n=");
	scanf("%d",&n);
	
	printf("the first %d natural no is : ",n);
	
	for(i=1 ; i<=n ; i++)
	{
		printf("\t%d",i);
		sum = sum + i ;
	}
	printf("\nthe sun of %d no is : %d",n,sum);
}
