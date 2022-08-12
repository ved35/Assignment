#include<stdio.h>

void main()
{
	int i , n , cube ;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		cube = i*i*i ;
		printf("number is %d and cube of the %d is : %d\n",i ,i , cube);
	}
}
