#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("Enter any character:");
	scanf("%c",&c);
	
	if(c>'A' && c<='Z')
	{
		printf("character is capital alphabet");
	}
	else
	if(c>='a' && c<='z')
	{
		printf("character is small alphabet");
	}
	else
	if(c>='0' && c<='9')
	{
		printf("character is digit");
	}
	else
	{
		printf("character is special character");
	}
}
