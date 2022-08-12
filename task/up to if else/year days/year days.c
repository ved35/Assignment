#include<stdio.h>

void main()
{
	int num , y;
	printf("enter month no. =");
	scanf("%d",&num);
	
	printf("enter year =");
	scanf("%d",&y);
	
	switch(num)
	{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("Month have 31 days");
			break ;
			
		case 2 :
			if(y%4==0 ? printf("Month have 29 days") : printf("Month have 28 days"))
			break ;
			
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("Month have 30 days");
			break;
			
		default :
			printf("invaild no.");
			break;
	}
}
