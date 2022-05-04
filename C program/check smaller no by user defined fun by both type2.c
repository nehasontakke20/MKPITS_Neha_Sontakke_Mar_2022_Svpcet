#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
	fun();
}
//no returntype and no argument
void fun()
{
	int x1,x2;
	printf("enter two number\n");
	scanf("%d%d",&x1,&x2);
	if(x1<x2)
	{
		printf("%d is smaller",x1);
	}
else
	{
		printf("%d is smaller",x2);
	}
	
}
