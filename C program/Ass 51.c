#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter two value:");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping the value of a & b: %d",a,b);
	a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swappig the value of a & b of %d",a,b);
}
