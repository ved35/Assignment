#include<stdio.h>

void main()
{
	int i , j , n=5 ;
	char ch = 'A'-1 ;
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("%c",ch+j);
		}
		printf("\n");
	}
}
