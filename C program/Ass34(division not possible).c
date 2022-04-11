#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float div_result;
	printf("Input two number:");
	printf("\na");
	scanf("%d",&a);
	printf("b");
	scanf("%d",&b);
	if(a!=0)
	{
		div_result=a/b;
		printf("%.1f\n",div_result);
	}
	else
	{
		printf("Division not possible\n");
	}
}
