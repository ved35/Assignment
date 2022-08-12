#include<stdio.h>

void main()
{
	char alpha ;
	
	printf("Enter the alphabet : ");
	scanf("%c",&alpha);
	
	if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
	{
		printf("This alphabet is a vowel");
	}
	else
	{
		printf("This alphabet is a consonant");
	}
}
