#include<stdio.h>

void main()
{
	int n ;
	
	printf("inpute the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , j , a[n] ;
	
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
	
	printf("\nunique number in array : ");
	
	for(i=0 ; i<n ; i++)
	{
		int temp=0;
		for(j=0 ; j<n ; j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					temp++;
				}	
			}			
		}
		if(temp==0)
		{
			printf("\t%d",a[i]);
		}	
	}
}
