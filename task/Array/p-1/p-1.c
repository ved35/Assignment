#include<stdio.h>

void main()
{
	int i , a[10] ;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Element in array are : ");
	
	for(i=0 ; i<10 ; i++)
	{
		printf("\t%d",a[i]);
	}
}
