#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
{
	int n1,n2,div;
	printf("Enter any number:");
	scanf("%d",&n1);
	printf("Enter any number:");
	scanf("%d",&n2);
	
	div=n1/n2;
	printf("div=%d",div);
}
