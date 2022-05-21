#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,res1,res2;
	printf("Enter any two numbers:");
	scanf("%d",&x,&y);
	res1=100-x;
	res2=100-y;
	if(res1<res2)
	{
		printf("%d nearest to 100",x);
	}
	else
	if(res2<res1)
	{
		printf("%d nearest to 100",y);
	}
	else
	{
		printf("Enter the number is not nearest to 100\n");
	}
}
