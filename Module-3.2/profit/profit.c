#include<stdio.h>

void main()
{
	int c_p , s_p , p ;
	
	printf("Enter cost price = ");
	scanf("%d",&c_p);
	
	printf("Enter selling price = ");
	scanf("%d",&s_p);
	
	p = s_p - c_p ;
	
	printf("You can booked your profit amount : %d",p);
}
