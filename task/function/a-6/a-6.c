// Write a program to find out the max number from given array using function

#include<stdio.h>

int max(int m ,int b[])
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
	 
	printf("Enter the Array value :\n");
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d = ",i);
		scanf("%d",&a[i]);
	}
	int m = max(n ,a);
	printf("\nMax element in array = %d",m);
}
