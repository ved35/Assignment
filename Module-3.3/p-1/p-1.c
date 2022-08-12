// Write a program to find out the max number from given array using function

#include<stdio.h>

int max(int m ,int b[m])
{
	int i ,maxi=0 ; 
	for(i=0 ; i<m ; i++)
	{
		if(maxi < b[i])
		{
			maxi = b[i] ;
		}
	}
	return maxi;
}

void main()
{
	int n=5 ;
	int a[n] ,i ;
	 
	printf("Enter the Array value :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	int m = max(n ,&a[n]);
	printf("Max = %d",m);
}
