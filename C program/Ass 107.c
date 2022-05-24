#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[2],x=0,j;
	for(i=0;i<2;i++)
	{
		printf("Enter 1st array element:");
		scanf("%d",&a[i]);
	}
	for(j=0;j<2;j++)
	{
		printf("True");
		x=1;
	}
	if(x==0)
	{
		printf("False");
	}
}
