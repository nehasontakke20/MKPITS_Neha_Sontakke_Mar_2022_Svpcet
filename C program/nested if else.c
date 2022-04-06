#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,res;
	float num3,num4,div;
	char choice;
	printf("press + for addition");
	printf("press - for subtraction");
	printf("press * for multiplication");
	printf("press / for division");
	printf("\nenter your choice-");
	scanf("%c",&choice);
	if(choice=='+')
	{
		printf("enter two numbers to add\n");
		printf("\n1st number:");
		scanf("%d",&num1);
		printf("\n2nd number:");
		scanf("%d",&num2);
		res = num1+num2;
		printf("addition of two number is %d",res);
	}
	else
	if(choice=='-')
	{
		printf("enter two numbers to sub\n");
		printf("\n1st number:");
		scanf("%d",&num1);
		printf("\n2nd number:");
		scanf("%d",&num2);
		res = num1-num2;
		printf("subtractionof two number is %d",res);	
	}
	else
	if(choice=='*')
	{
		printf("enter two numbers to mul\n");
		printf("\n1st number:");
		scanf("%d",&num1);
		printf("\n2nd number:");
		scanf("%d",&num2);
		res = num1*num2;
		printf("multiplication of two number is %d",res);
	}
	else
	if(choice=='/')
	{
		printf("enter two numbers to div\n");
		printf("\n1st number:");
		scanf("%d",&num1);
		printf("\n2nd number:");
		scanf("%d",&num2);
		res = num1/num2;
		printf("division of two number is %d",res);
	}
	else
	{
		printf("invalid input");	
	}
	}
