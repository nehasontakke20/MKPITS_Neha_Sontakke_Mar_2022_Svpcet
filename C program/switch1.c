#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	printf("enter 1 or 2 or 3");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("in case1");
		break;
		case 2:
		printf("in case2");
		break;
		case 3:
		printf("in case3");
		break;
	    default:
		printf("i am in default");
		}
}
