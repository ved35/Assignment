#include<stdio.h>

void main()
{
	int y;
	
	printf("Enter year = ");
	scanf("%d",&y);
	
	if(y%4==0?printf("This is leap-year") : printf("This is not leap year"));
}
