#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	int a=0 , n=0 , s=0 , i , len;
	
	printf("Enter the string : ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0 ; i<=len ; i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			a++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			n++;
		}
		else
		{
			s++;
		}
	}
	printf("\nTotal alphabets : %d",a);
	printf("\nTotal digits : %d",n);
	printf("\nTotal special no. : %d",s);
}
