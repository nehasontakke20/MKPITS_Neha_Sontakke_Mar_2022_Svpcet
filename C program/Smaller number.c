#include<stdio.h>
#include<conio.h>
int x1,x2; //gobal declaration
int fun();
int main()
{
	int s;
	s=fun();
	if(s==0)
	{
		printf("%d is smaller",x1);
	}
	else
	{
		printf("%d is smaller",x2);
	}
}
//return type and no argument
int fun()
{
	printf("enter two number\n");
	scanf("%d%d",&x1,&x2);
	if(x1<x2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

