#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int s;
	char n1[10]={"nayan"};
	char n2[10];
	printf("Enter any name");
	scanf("%s",n2);
	s=strcmp(n1,n2);
	if(s==0)
	{
		printf("name is palidrome");
	}
	else
	{
		printf("name is not palidrome");
	}
}
