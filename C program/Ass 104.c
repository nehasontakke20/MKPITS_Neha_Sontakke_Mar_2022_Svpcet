#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
