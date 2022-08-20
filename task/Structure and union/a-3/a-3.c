/*
WAP to calculte difference between two times using structure
*/

#include<stdio.h>

struct time1
{
	int hr ;
	int min ;
	int sec ;
}t1;

struct time2
{
	int hr ;
	int min ;
	int sec ;
}t2;

void main()
{
	printf("enter 1st time : ---\n");
	
	printf("enter hr. : ");
	scanf("%d",&t1.hr);
	
	printf("enter min. : ");
	scanf("%d",&t1.min);
	
	printf("enter second. : ");
	scanf("%d",&t1.sec);
	
	printf("\n\nenter 2nd time : ---\n");
	
	printf("enter hr. : ");
	scanf("%d",&t2.hr);
	
	printf("enter min. : ");
	scanf("%d",&t2.min);
	
	printf("enter second. : ");
	scanf("%d",&t2.sec);
	
	printf("\ntime1 : %d : %d : %d",t1.hr,t1.min,t1.sec);
	printf("\ntime2 : %d : %d : %d",t2.hr,t2.min,t2.sec);
	
	if(t1.hr > t2.hr)
	{
		int a , b , sum=0 ;
		
		a = t1.hr*3600 + t1.min*60 + t1.sec ;
		b = t2.hr*3600 + t2.min*60 + t2.sec ;
		
		sum = a - b ;
		
		int h , m , s ;
		
		h = sum / 3600 ;
		sum = sum - h*3600 ;
		
		m = sum / 60 ;
		sum = sum - m*60;
		
		s = sum ;
		printf("\n\ndifference = %d : %d : %d",h,m,s);
	}
	else
	{
		int a , b , sum=0 ;
		
		a = t1.hr*3600 + t1.min*60 + t1.sec ;
		b = t2.hr*3600 + t2.min*60 + t2.sec ;
		
		sum = b - a ;
		
		int h , m , s ;
		
		h = sum / 3600 ;
		sum = sum - h*3600 ;
		
		m = sum / 60 ;
		sum = sum - m*60;
		
		s = sum ;
		printf("\n\ndifference = %d : %d : %d",h,m,s);
	}
}
