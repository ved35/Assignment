#include<stdio.h>

void main()
{
	int i , j , n=5 , a=0 ;
	char ch = 'A';
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("%c",ch+a);
			a++;
		}
		printf("\n");
	}
}
