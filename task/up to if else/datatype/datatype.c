#include<stdio.h>

void main()
{
	char a ;
	
	printf("enter value of a=");
	scanf("%c",&a);
	
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
	{
		printf("data type is charcter");
	}
	else if(a>='0' && a<='9')
	{
		printf("data type is interger");
	}
	else
	{
		printf("other data type");
	}
}
