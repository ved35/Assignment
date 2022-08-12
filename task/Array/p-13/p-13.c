#include<stdio.h>

void main()
{
	int n ;
	
	printf("input the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , j , a[n] ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("the exist array list is : ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",a[i]);
	}
	
	n=n+1;
	
	printf("\n\ninsert value : ");
	scanf("%d",&a[n]);
	
	for(i=0 ; i<n+1 ; i++)
	{
		for(j=i+1 ; j<n+1 ; j++)
		{
			if(a[i]>a[j])
			{
				int temp ; 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n\n array sorted in ascending order : ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("\t%d",a[i]);
	}
}
