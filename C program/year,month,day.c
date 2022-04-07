#include<stdio.h>
#include<conio.h>
void main()
{
	int ndays,y,m,d;
	printf("input number of day:");
	scanf("%d",&ndays);
	y=(int)ndays/365;
	ndays=ndays-(365*y);
	m=(int)ndays/30;
	d=(int)ndays-(m*30);
	printf("%d year\n%d month\n%d day",y,m,d);
}
