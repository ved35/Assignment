#include<stdio.h>

void main()
{
	int n ;
	
	printf("inpute the number of element to store in array : ");
	scanf("%d",&n);
	
	int i , a[n] , max=0 , min=0;
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	min = max ;;
	
	for(i=0 ; i<n ; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	
	printf("\nmax no. of stor element in array are : %d",max);
	printf("\nmin no. of stor element in array are : %d",min);
}
