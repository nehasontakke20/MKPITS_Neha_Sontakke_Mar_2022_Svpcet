#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("\nInput an integer:");
	scanf("%d",&x);
	if(x>=100 && x<=200)
	{
		printf("Range[100,200]\n");
	}
	else
	{
		printf("Not in range[100,200]\n");
	}
}
