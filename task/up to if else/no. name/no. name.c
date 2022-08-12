#include<stdio.h>

void main()
{
	int no ;
	
	printf("enter no.=");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1 :
			printf("one");
			break;
			
		case 2 :
			printf("two");
			break;
			
		case 3 :
			printf("three");
			break;
			
		case 4 :
			printf("four");
			break;
			
		case 5 :
			printf("five");
			break;
			
		default :
			printf("invaild no.");
			break ;
	}
}
