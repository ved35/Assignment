#include<stdio.h>
#include<string.h>

void main()
{
	char str1[100] , str2[100] ;
	
	printf("enter the string : ");
	gets(str1);
	
	strcpy(str2 , str1);
	
	strrev(str2);
	
	int n = strcmp(str1 , str2);
	
	if(n==0)
	{
		printf("string is palindrome.");
	}
	else
	{
		printf("string is not palindrome.");
	}
}
