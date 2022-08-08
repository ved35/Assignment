#include<stdio.h>

void main()
{
	int i , n , m, sum = 0 ;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	while(n != 0)
	{
		m = n % 10 ;
		n = n / 10 ;
		sum = sum + m ;
	}
	printf("sum of digit = %d",sum);
}
