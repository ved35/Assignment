/*
Add two Complex number using structure
*/
#include<stdio.h>

struct complex1
{
	float r_n ;
	float i_n ;
}c1;

struct complex2
{
	float r_n ;
	float i_n ;
}c2;

void main()
{
	printf("enter 1st complex number : ---\n\n");
	
	printf("enter real no. : ");
	scanf("%f",&c1.r_n);
	
	printf("enter imgnary no. : ");
	scanf("%f",&c1.i_n);
	
	printf("\n\nenter 2nd complex number : ---\n\n");
	
	printf("enter real no. : ");
	scanf("%f",&c2.r_n);
	
	printf("enter imgnary no. : ");
	scanf("%f",&c2.i_n);
	
	float a , b ;
	
	a = c1.r_n + c2.r_n ;
	b = c1.i_n + c2.i_n ;
	
	printf("\n\n sum = %f + %f i",a,b);
}
