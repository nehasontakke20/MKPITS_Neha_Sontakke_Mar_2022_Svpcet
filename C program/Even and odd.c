#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a;
	printf("enter any no:");
	scanf("%d",&num);
	a=num%2;
	if (a==0)
	{
	printf("%d is even no.",num);	
	}
	else
	{
		printf("%d is odd no.",num);
	}
		
	
}
