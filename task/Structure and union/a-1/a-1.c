/*
WAP to add two distance in the inch-feet system using structure
*/
#include<stdio.h>

struct distance1
{
	int feet ;
	float inch ;
}d1;

struct distance2
{
	int feet ;
	float inch ;
}d2;

void main()
{
	printf("enter 1st distance : \n");
	
	printf("enter feet : ");
	scanf("%d",&d1.feet);
	
	printf("enter inch : ");
	scanf("%f",&d1.inch);
	
	printf("\n\nenter 2nd distance : \n");
	
	printf("enter feet : ");
	scanf("%d",&d2.feet);
	
	printf("enter inch : ");
	scanf("%f",&d2.inch);
	
	float a , b , sum=0 , s1;
	int s ;
	
	a = d1.feet*12 ;
	a = a + d1.inch ;
	
	b = d2.feet*12 ;
	b = b + d2.inch ;
	
	sum = a + b ;
	
	sum = sum / 12 ;
	
	s=sum ;
	
	s1 = sum-s ;
	
	printf("\n\nsum of distance = %d - %f ",s,s1*12);
}
