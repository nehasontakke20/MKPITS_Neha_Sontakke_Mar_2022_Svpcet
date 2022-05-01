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
	int num1,num2,sw;
	printf("enter any two no:");
	scanf("%d%d",&num1,&num2);
	sw=num1;
	num1=num2;
	num2=sw;
	printf("after swapping\n");
	printf("num1=%d num2=%d",num1,num2);
}


