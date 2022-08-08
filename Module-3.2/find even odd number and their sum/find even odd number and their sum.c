#include<stdio.h>

void main()
{
	int i , n , e_sum=0 ,o_sum=0 ;
	printf("n=");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		if(i%2==0)
		{
			e_sum = e_sum + i ;
		}
		else
		{
			o_sum = o_sum + i ;
		}
	}
	printf("even number sum = %d\n",e_sum);
	printf("odd number sum = %d",o_sum);
}
