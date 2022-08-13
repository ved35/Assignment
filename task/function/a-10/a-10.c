// find max and min number in array

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

int min(int m ,int b[])
{
	int i ,mi=b[0] ; 
	for(i=0 ; i<m ; i++)
	{
		if(mi > b[i])
		{
			mi = b[i] ;
		}
	}
	return mi;
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
	int x = max(n ,a);
	printf("\nMax element in array = %d",x);
	
	int y = min(n , a);
	printf("\nMin element in array = %d",y);
}
