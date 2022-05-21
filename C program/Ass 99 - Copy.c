#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,res1,res2;
	printf("Enter 1st number:");
	scanf("%d",&x);
	printf("Enter2nd number:");
	scanf("%d",&y);
	if(x==y)
	{
		printf("0\n");
	}
	else
	res1=x%5;
	res2=y%5;
	if(res1==res2)
	{
		if(x<y)
		{
			printf("%d is smaller",x);
		}
		else
		{
			printf("%d is smaller",y);
		}
	}
	else
	{
		if(x>y)
		{
			printf("%d is greater ",x);
		}
		else
		{
			printf("%d is greater",y);
		}
	}
}
