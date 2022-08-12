#include<stdio.h>

void main()
{
	int m , p , c , total , m_p ;
	
	printf("Enter Maths mark =");
	scanf("%d",&m);
	
	printf("Enter physics mark =");
	scanf("%d",&p);
	
	printf("Enter computer mark =");
	scanf("%d",&c);
	
	total = m + p + c ;
	m_p = m + p ;
	
	printf("\ntotal mark = %d",total);
	printf("\ntotal of maths and computer = %d",m_p);
	
	if(m>=65 && p>=55 && c>=50 && total>=190 || m_p>=140)
	{
		printf("\nThe candidate is eligible");
	}
	else
	{
		printf("\nThe candidate is not eligible");
	}
}
