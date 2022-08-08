#include<stdio.h>

void main()
{
	int n , m , max = 0;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	while(n != 0)
	{
		m = n % 10 ;
		n = n/ 10 ;
		
		if(max < m)
		{
			max = m ;
		}
	}
	printf("Max digit = %d",max);
}
