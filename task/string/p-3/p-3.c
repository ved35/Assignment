#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	int word=0 , i ;
	
	printf("Enter the string : ");
	gets(str);
	
	for(i=0 ; i<=strlen(str) ; i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			word++;
		}
	}
	printf("Total word : %d",word);
}
