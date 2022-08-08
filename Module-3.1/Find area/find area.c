#include<stdio.h>

#define PI 3.14

void main()
{
	//area of circle
	int r;
	printf("Enter radius = ");
	scanf("%d",&r);
	
	printf("Area of circle = %f\n",PI * r * r);
	
	//area of rectangle
	int l , w ;
	
	printf("Enter length = ");
	scanf("%d",&l);
	
	printf("Enter width = ");
	scanf("%d",&w);
	
	printf("Area of rectangle = %d\n",l * w);
	
	//area of triangle
	int h , b ;
	
	printf("Enter height = ");
	scanf("%d",&h);
	
	printf("Enter base = ");
	scanf("%d",&b);
	
	printf("Area of triangle = %f",0.5* h * b);
}
