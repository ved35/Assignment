#include<stdio.h>

void main()
{
	int n ;
	
	printf("inpute the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , a[n] , even , odd ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("\neven no. in array are : ");
	
	for(i=0 ; i<n ; i++)
	{
		if(a[i]%2==0)
		{
			printf("\t%d",a[i]);
		}
	}
	
	printf("\nodd no. in array are : ");
	
	for(i=0 ; i<n ;i++)
	{
		if(a[i]%2!=0)
		{
			printf("\t%d",a[i]);
		}
	}
}
