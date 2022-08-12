//find the largest number of element

#include<stdio.h>

int largest(int m , int b[])
{
	//int x=m;
	int j , max=0 , c[100];
	
	c[100]=b[100];
	
	for(j=0 ; j<=m ; j++)
	{
		if(max < c[j])
		{
			max = c[j];
		}
	}
	printf("max = %d",max);
}

void main()
{
	int n ; 
	
	printf("total element in array : ");
	scanf("%d",&n);
	
	int i , a[n];
	
	for(i=0 ; i<n ; i++)
	{
		scanf("element-%d : %d",i,&a[i]);
	}
	
	printf("%d",largest(n , a));
}
