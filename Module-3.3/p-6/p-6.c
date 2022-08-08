#include<stdio.h>

void main()
{
	int n ;
	
	printf("size of matrix : ");
	scanf("%d", &n);
	
	int a[n][n] , b[n][n] , i , j , k ;
	
	printf("Enter the value of matrix A : \n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("element[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the value of matrix B : \n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("element[i][j]=",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("matrix A : \n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("matrix B : \n");
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	for(k=0 ; k>=0 ; k++)
	{
		int choice ;
		
		printf("\n1. Addition");
		printf("\n2. Substraction");
		printf("\n3. Multiplcation");
		printf("\n4. exit");
		printf("\nEnter you choice = ");
		scanf("%d",&choice);
		if(choice==4)
		{
			break ;
		}
		else if(choice==1)
		{
			int p , q , c[n][n];
			printf("Given matrix addition : \n");
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					c[p][q] = a[p][q] + b[p][q] ;
				}
			}
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					printf("\t%d",c[p][q]) ;
				}
				printf("\n");
			}			
		}
		else if(choice==2)
		{
			int p , q , c[n][n];
			printf("Given matrix substraction : \n");
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					c[p][q] = a[p][q] - b[p][q] ;
				}
			}
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					printf("\t%d",c[p][q]) ;
				}
				printf("\n");
			}
		}
		else if(choice==3)
		{
			int p , q , r ,c[n][n] ;
			printf("Given matrix multiplication : \n");
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					int temp=0 ;
					for(r=0 ; r<n ; r++)
					{
						temp = temp + a[p][r] * b[r][q];
					}
					c[p][q] = temp ;
				}
			}
			for(p=0 ; p<n ; p++)
			{
				for(q=0 ; q<n ; q++)
				{
					printf("\t%d",c[p][q]) ;
				}
				printf("\n");
			}
		}
		else
		{
			printf("choice is invaid");
		}
	}
}
