#include<stdio.h>
#include<string.h>

void main()
{
	char str[15] ;
	int len=0 ;
	
	printf("Enter the string :");
	gets(str);
	
	while(str[len] != '\0')
	{
		len++ ;
	}
	printf("Length of the string is : %d",len);
}
