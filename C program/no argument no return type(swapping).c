#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
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
