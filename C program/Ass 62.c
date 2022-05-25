#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("\nCapital alphabet set in decimal: ");
	for(c=65;c<=90;c++)
	{
		printf("\n%c=%d",c,c);
	}
	printf("\nSmall alphabet set in decimal:");
	for(c=97;c<=122;c++)
	{
		printf("\n%c=%d",c,c);
	}
}
