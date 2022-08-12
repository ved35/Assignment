#include<stdio.h>

void main()
{
	char ch ;
	
	printf("enter ch=");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("alphabet is vowel");
			break ;
			
		default :
			printf("alphabet is consonant");
			break ;
	}
}
