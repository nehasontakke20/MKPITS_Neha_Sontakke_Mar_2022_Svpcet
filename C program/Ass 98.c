#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,res1,res2,res3;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	res1=a-b;
	res2=a-c;
	res3=b-c;
	if(res1>=20)
	{
		printf("True\n");
	}
	else
	if(res2>=20)
	{
		printf("True\n");
	}
	else
	if(res3>=20)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
}
