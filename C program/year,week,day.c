#include<stdio.h>
#include<conio.h>
void main()
{
	int days,years,weeks;
	days=1329;
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("years:%d\n",years);
	printf("weeks:%d\n",weeks);
	printf("days:%d\n",days);
	scanf("convert days to years,weeks and days");
}
