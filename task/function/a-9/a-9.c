//check whether two given string are anagram or not using recursion 

#include<stdio.h>
#include<string.h>

void anagram(char s1[] , char s2[])
{
	int i , j ;
	int a = strlen(s1);
	int b = strlen(s2);
	char t ;
	
	for(i=0 ; i<a ; i++)
	{
		for(j=i+1 ; j<a ; j++)
		{
			if(s1[i] > s1[j])
			{
			/*	t = s1[i];
				s1[i] = s1[j];
				s2[j] = t ; */
				
				s1[i]=s1[i]+s1[j];
				s1[j]=s1[i]-s1[j];
				s1[i]=s1[i]-s1[j];
			}
		}
	}
	for(i=0 ; i<b ; i++)
	{
		for(j=i+1 ; j<b ; j++)
		{
			if(s2[i] > s2[j])
			{
				t = s2[i];
				s2[i] = s2[j];
				s2[j] = t;
			}
		}
	}
	int x = strcmp(s1 , s2);
	if(x==0)
	{
		printf("\nstring is anagram");
	}
	else
	{
		printf("\nstring is not anagram");
	}
}

void main()
{
	char str1[100] ,str2[100];
	
	printf("Enter the string-1 : ");
	gets(str1);
	
	printf("Enter the string-2 : ");
	gets(str2);
	
	anagram(str1 , str2);
}
