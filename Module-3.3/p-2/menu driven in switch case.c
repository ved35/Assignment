#include<stdio.h>

void main()
{
	int a , b , n=1 ;
	
	printf("enter no.1 =");
	scanf("%d",&a);
	
	printf("enter no.1 =");
	scanf("%d",&b);
	

	while(n!=0)
	{
		int c ;
		
		printf("Input your option :\n");
		printf("1-Addition\n");
		printf("2-Substraction\n");
		printf("3-Multiplication\n");
		printf("4-Division\n");
		printf("5-Exit\n");
		
		printf("enter your choice =");
		scanf("%d",&c);
	
		switch(c)
		{
			case 1 :
				printf("Addition : %d",a+b);
				break;
			
			case 2 :
				printf("Substraction : %d",a-b);
				break;
			
			case 3 :
				printf("Multiplication : %d",a*b);
				break;
			
			case 4 :
				printf("Division : %f",a/b);
				break;
			
			case 5 :
				break;
			
			default :
				printf("Invaild input");
				break;
		}
	}
}
