#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("[a-z]\n");
	for(c=97;c<=122;c++)
	{
		printf("\n%d",c);
	}
	printf("[A-Z]\n");
	for(c=65;c<=90;c++)
	{
		printf("\n%d",c);
	}
}
