#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,res;
	printf("\nInput an integer:");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("%d",res);
	if(a+b>=10 && a+b<=20)
	{
		printf("\nrange [10,20]");
	}
	else
	{
		printf("\nNot in range[10,20]");
	}
}
