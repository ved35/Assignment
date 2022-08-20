/*
Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age
*/

#include<stdio.h>

struct employee
{
	int empno ;
	char name[10] ;
	char address[100];
	int age ;	
}e[10];

void main()
{
	int n ,i ;
	printf("how many employee you wanna enter : ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++)
	{
		printf("----- : Enter employee detail : -----\n"); 
		
		printf("\nenter employee number : ");
		scanf("%d",&e[i].empno);
		
		printf("enter employee name : ");
		scanf("%s",&e[i].name);
		
		printf("enter employee address : ");
		scanf("%s",&e[i].address);
		
		printf("enter employee age : ");
		scanf("%d",&e[i].age);
		
		printf("\n");
	}
	
	for(i=0 ; i<n ; i++)
	{
		printf("\n----- : display employe detail : -----\n"); 
		
		printf("\nenter employee number : %d",e[i].empno);
		
		printf("\nenter employee name : %s",e[i].name);
		
		printf("\nenter employee address : %s",e[i].address);
		
		printf("\nenter employee age : %d\n",e[i].age);
	}
}
