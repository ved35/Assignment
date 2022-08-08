#include<stdio.h>

void main()
{
	int a , b ;
	
	printf("value of a=");
	scanf("%d",&a);
	
	printf("value of b=");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("After swaping numbers a=%d and b=%d",a,b);
}
