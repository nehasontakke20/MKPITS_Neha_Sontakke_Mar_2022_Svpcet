#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,diff;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	sum = a+b;
	diff = a-b;
	if(a==5 || b==5 || sum==5 || diff==5)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
}
