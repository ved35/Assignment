#include<stdio.h>

void strrevs(char *str)
{
	if(*str)
	{
		strrevs(str+1);
		printf("%c",*str);
	}
}

void main()
{
	char str[]="welcome";
	
	strrevs(str);
}
