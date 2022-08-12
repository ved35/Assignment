#include<stdio.h>
void main()
{
	int r_n , phy , che , comp , total ;
	float percentage ;
	char name[10] ;
	
	printf(" Enter Roll-no = ");
	scanf("%d",&r_n);
	
	printf("Enter the name = ");
	scanf("%s",&name[10]);
	
	printf(" Enter physics marks = ");
	scanf("%d",&phy);
	
	printf("Enter chemistry marks = ");
	scanf("%d",&che);
	
	printf("Enter computer marks = ");
	scanf("%d",&comp);
	
	total = phy + che + comp ;
	percentage = total/3;
	
	printf("\nTotal Mark = %d", total);
	printf("\nPercentage = %f\n", percentage); 
	
	if(percentage >= 80)
	{
		printf("divisin = distinction");
	}
	else if(percentage >= 65)
	{
		printf("divisin = first class");
	}
	else if(percentage >= 55)
	{
		printf("divisin = second class");
	}
	else if(percentage >= 40)
	{
		printf("divisin = third class");
	}
	else
	{
		printf("division = fail");
	}
}
