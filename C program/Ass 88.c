#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],t=0;
	printf("\nEnter five number:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
		{
			printf("\n sequence 1 2 3 appear in given array");
			t=1;
		}
	}
	if(t==0)
	{
		printf("\nsequence 1 2 3 not appear in given array");
	}
}
