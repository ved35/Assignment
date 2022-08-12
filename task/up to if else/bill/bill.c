#include<stdio.h>

void main()
{
	int c_id, c_unit;
	float total, s_charge, m_total;
	
	printf("customer id =");
	scanf("%d",&c_id);
	
	printf("customer unit =");
	scanf("%d",&c_unit);
	
	if(c_unit>=100 && c_unit<=199)
	{
		total = c_unit * 1.2 ;
		printf("net amount paid by customer : %f",total);
	}
	else if(c_unit>=200 && c_unit<400)
	{
		total = c_unit * 1.5 ;
		printf("net amount paid by customer : %f",total);
	}
	else if(c_unit>=400 && c_unit<600)
	{
		total = c_unit * 1.8 ;
		printf("\namount charge =%f",total);
		s_charge = total * 0.15;
		printf("\nsurchage amount =%f",s_charge);
		m_total = total + s_charge;
		printf("\nnet amount paid by customer : %f",m_total);
	}
	else if(c_unit>=600)
	{
		total = c_unit * 2 ;
		printf("\namount charge =%f",total);
		s_charge = total * 0.15;
		printf("\nsurchage amount =%f",s_charge);
		m_total = total + s_charge;
		printf("\nnet amount paid by customer : %f",m_total);
	}
	else
	{
		printf("min bill should be rs. 100/-");
	}
}
