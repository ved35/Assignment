//swap two number

#include<stdio.h>

void swap(int a , int b)
{
	int temp ;
	
	temp = a ;
	a = b ;
	b = temp ;
	
	printf("num1 = %d \nnum2 = %d",a,b);
}

void main()
{
	int n1 , n2 ;
	
	printf("Enter number1 = ");
	scanf("%d",&n1);
	
	printf("Enter number2 = ");
	scanf("%d",&n2);
	
	swap(n1 , n2);
}


