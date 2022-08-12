#include<stdio.h>

void main()
{
	int n ;
	
	printf("input the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , j , a[n] , count=0 ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("stor element in array are :");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		for(j=i ; j<n ; j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
		}
	}
	printf("\ntotal number of duplicate no. : %d",count);
}
