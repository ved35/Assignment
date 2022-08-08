#include<stdio.h>

void main()
{
	int P , T = 5 ; 
	float R = 7.40 ;
	
	printf("Enter principal = ");
	scanf("%d",&P);
	
	printf("find an interest = %f",(P * R * T)/100);
}
