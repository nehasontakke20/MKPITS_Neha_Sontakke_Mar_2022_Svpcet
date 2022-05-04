#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	c=add(a,b);
	printf("add=%d",c);
}
int add(int x,int y)
{
	int add;
	add=x+y;
	return add;
}
