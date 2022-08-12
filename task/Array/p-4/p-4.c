#include<stdio.h>

void main()
{
	int n ;
	
	printf("inpute the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , a[n] , b[n] ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("first array are : ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		b[i]=a[i];
	}
	
	printf("\ncopied array are : ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",b[i]);
	}
}
