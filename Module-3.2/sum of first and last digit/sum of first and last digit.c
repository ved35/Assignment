#include<stdio.h>

void main()
{
	int n ,l_d , f_d;
	
	printf("Enter no.=");
	scanf("%d",&n);
	
	l_d = n % 10 ;
	
	while(n != 0)
	{
		f_d = n % 10 ;
		n = n / 10 ;
	}
	printf("sum of first and last digit = %d",l_d + f_d);
}
