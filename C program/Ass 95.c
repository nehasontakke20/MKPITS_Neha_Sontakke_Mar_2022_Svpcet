#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%10<=2 || n%10>=8)
	{
		printf("Within 2 of multiple of 10");
	}
	else
	{
		printf("Not within 2 of multiple of 10");
	}
}
