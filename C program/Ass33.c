#include<stdio.h>
#include<conio.h>
void main()
{
	int co1,co2;
	printf("Input the value for X & Y Co-ordinates:");
	scanf("%d%d",&co1,&co2);
	if(co1>0 && co2>0)
	{
	printf("The co-ordinates belongs in 1st quadrant");
	}
	else
	if(co1<0 && co2>0)
	{
		printf("The co-ordinates belongs in 2nd quadrant");
	}
	else
	if(co1<0 && co2<0)
	{
		printf("The co-ordinates belongs in 3rd quadrant");
	}
	else
	if(co1>0 && co2<0)
	{
		printf("The co-ordinates belongs in 4th quadrant");
	}
	else
	if(co1==0 && co2==0)
	{
		printf("The co-ordinates belongs in origin");
	}
}
