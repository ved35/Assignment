#include<stdio.h>

void main()
{
	int i , sum = 0 ;
	 printf("The first 10 nutural number is :");
	 for(i=1 ; i<=10 ; i++)
	 {
	 	sum = sum + i ;
	 	printf("%d\t",i);
	 }
	 printf("\nThe sum = %d",sum);
}
