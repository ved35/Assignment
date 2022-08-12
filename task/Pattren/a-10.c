#include<stdio.h>

void main()
{
	int i , j , k , n=5 ;
	char ch = 'A'-1;
	for(i=1 ; i<=n ; i++)
	{
		char a = 'A' ;
		for(k=i ; k<=n-1 ; k++)
		{
			printf(" ");
		}
		for(j=1 ; j<=2*i-1 ; j++)
		{
			if(i==j)
			{
				printf("%c",ch+i);
				a = ch+i ;
			}
			else if(j==1)
			{
				printf("%c",ch+j);
			}
			else if(i<j)
			{
				a--;
				printf("%c",a);
			}
			else
			{
				a++;
				printf("%c",a);
			}
		}
		printf("\n");
	}
}
