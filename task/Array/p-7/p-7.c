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
	
	int m ;
	
	printf("size od array B : ");
	scanf("%d",&m);
	
	int b[m];
	
	for(i=0 ; i<m ; i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&b[i]);
	}
	
	int c[n+m];
	
	for(i=0 ; i<n+m ; i++)
	{
		if(i<n)
		{
			c[i]=a[i];
		}
		else
		{
			c[i]=b[i-n];
		}
	}
	printf("\nmerge array : ");
	for(i=0 ; i<n+m ; i++)
	{
		printf("\t%d",c[i]);
	}
	
	for(i=0 ; i<n+m ; i++)
	{
		for(j=i+1 ; j<n+m ; j++)
		{
			if(c[i]<c[j])
			{
				int temp ; 
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	printf("\n\nmerge array in decending order : ");
	
	for(i=0 ; i<n+m ; i++)
	{
		printf("\t%d",c[i]);
	}
}
