#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
{
	int a,r;
	printf("enter any number : ");
	scanf("%d",&a);
	r=a%4;
	if(r==0)
	{
 		printf("number is divisible by 4");
	}
	if(r!=0)
	{
		printf("number is not divisible by 4");
	}
}
