#include<stdio.h>
#include<conio.h>
void fun1();
void add(int x,int y);
void main()
{
	fun1();
}
void fun1()
{
	int a=2,b=3;
	add(a,b);
}
void add(int x, int y)
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


