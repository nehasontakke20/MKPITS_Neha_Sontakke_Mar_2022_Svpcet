#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
{
	int n1,n2,sub;
	printf("Enter any number:");
	scanf("%d",&n1);
	printf("Enter any number:");
	scanf("%d",&n2);
	
	sub=n1-n2;
	printf("sub=%d",sub);
}
