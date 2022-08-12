#include<stdio.h>

void main()
{
	char grade ;
	
	printf("grade=");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'e' :
			printf("Excellent");
			break ;
			
		case 'v' :
			printf("very good");
			break ;
		
		case 'g' :
			printf("good");
			break ;
			
		case 'a' :
			printf("average");
			break ;
			
		case 'f' :
			printf("fail");
			break ;
			
		default :
			printf("invaild input");
			break ;
	}
}
