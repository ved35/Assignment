#include<stdio.h>

void main()
{
	int n , m;
	
	printf("size of array A : ");
	scanf("%d",&n);
	
	int i , j , a[n] ;
	
	printf("Enter array A : \n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("size of array B : ");
	scanf("%d",&m);
	
	int x , b[m] ;
	
	printf("Enter array B : \n");
	
	for(i=0 ; i<m ; i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&b[i]);
	}

	for(x=1 ; x>0 ; x++)
	{
		int choice , ch;
		
		printf("\nArray A & B sorting option.");
		printf("\n1. accending");
		printf("\n2. decending");
		printf("\n3. exit");
		
		printf("\nEnter the choice for array A : ");
		scanf("%d",&choice);
		
		printf("\nEnter the choice for array B : ");
		scanf("%d",&ch);
		
		if(choice == 1)
		{
			for(i=0 ; i<n ; i++)
			{
				for(j=i+1 ; j<n ; j++)
				{
					if(a[i]>a[j])
					{
						int temp ; 
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			printf("\n\n array sorted in ascending order : ");
	
			for(i=0 ; i<n ; i++)
			{
				printf("\t%d",a[i]);
			}	
		}
		else if(choice == 2)
		{
			for(i=0 ; i<n ; i++)
			{
				for(j=i+1 ; j<n ; j++)
				{
					if(a[i]<a[j])
					{
						int temp ; 
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			printf("\n\n array sorted in decending order : ");
	
			for(i=0 ; i<n ; i++)
			{
				printf("\t%d",a[i]);
			}	
		}
		else if(choice == 3)
		{
			break ;
		}
		else
		{
			printf("invaild choice for array A");	
		}
		
		printf("\n");
		
		if(ch == 1)
		{
			for(i=0 ; i<n ; i++)
			{
				for(j=i+1 ; j<n ; j++)
				{
					if(b[i]>b[j])
					{
						int temp ; 
						temp = b[i];
						b[i] = b[j];
						b[j] = temp;
					}
				}
			}
			printf("\n\n array sorted in ascending order : ");
	
			for(i=0 ; i<n ; i++)
			{
				printf("\t%d",b[i]);
			}	
		}
		else if(ch == 2)
		{
			for(i=0 ; i<n ; i++)
			{
				for(j=i+1 ; j<n ; j++)
				{
					if(b[i]<b[j])
					{
						int temp ; 
						temp = b[i];
						b[i] = b[j];
						b[j] = temp;
					}
				}
			}
			printf("\n\n array sorted in decending order : ");
	
			for(i=0 ; i<n ; i++)
			{
				printf("\t%d",b[i]);
			}	
		}
		else if(ch == 3)
		{
			break ;
		}
		else
		{
			printf("invaild choice for array B");	
		}
	}
}
