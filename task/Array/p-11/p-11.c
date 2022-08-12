#include<stdio.h>

void main()
{
	int n ;
	
	printf("size od array A : ");
	scanf("%d",&n);
	
	int i , j , a[n] ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]<a[j])
			{
				int temp ; 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n\n array sorted in decending order : ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",a[i]);
	}
}
