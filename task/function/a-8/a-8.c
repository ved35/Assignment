//print all perfect number is given range

#include<stdio.h>

void perfect(int l , int u)
{
	int i ;
	printf("perfect numbers between %d to %d = ",l,u);
	for(i=l ; i<u ; i++)
	{
		int a=1 , r , sum=0;
		while(a<i)
		{
			if(i%a==0)
			{
				r = a ;
				sum = sum + a ;
			}
			a++;
		}
		if(sum == i)
		{
			printf("\t%d",sum);
		}
	}
}

void main()
{
	int l_r , u_r ;
	
	printf("Enter the lower range : ");
	scanf("%d",&l_r);
	
	printf("Enter the upper range : ");
	scanf("%d",&u_r);
	
	perfect(l_r , u_r);
}
