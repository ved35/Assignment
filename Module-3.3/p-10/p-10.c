/*
Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age
*/

#include<stdio.h>

#define n 5

struct employee
{
	int empno ;
	char name[10] ;
	char address[100];
	int age ;	
}e[n];

void main()
{
	int i ;
	
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
