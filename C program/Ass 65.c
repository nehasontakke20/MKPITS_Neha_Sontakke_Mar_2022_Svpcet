#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	printf("check two integer number thet are multiple or not:");
	printf("\nEnter 1st number");
	scanf("%d",&num1);
	printf("\nEnter 2nd number");
	scanf("%d",&num2);
	if(num1%num2==0)
	{
		printf("\n%d is multiple of %d",num1,num2);
	}
	else
	{
		printf("\n%d is not multiple of %d",num1,num2);
	}
}
