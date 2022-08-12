#include<stdio.h>
void main()
{
	int r_n , phy , che , comp , total ;
	float percentage ;
	
	printf(" Enter Roll-no = ");
	scanf("%d",&r_n);
	
	printf(" Enter physics marks = ");
	scanf("%d",&phy);
	
	printf("Enter chemistry marks = ");
	scanf("%d",&che);
	
	printf("Enter computer marks = ");
	scanf("%d",&comp);
	
	total = phy + che + comp ;
	percentage = total/3;
	printf("\nTotal Mark = %d", total);
	printf("\nPercentage = %f", percentage); 
}
