#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=7;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
	for(r=8;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
		if(c==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
