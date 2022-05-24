#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i,c[2],j;
	for(i=0;i<5;i++)
	{
		printf("Enter 1st array elements:");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("Enter 2nd array element:");
		scanf("%d",&b[i]);
	}
	c[0]=a[2];
	c[1]=b[2];
	for(j=0;j<2;j++)
	{
		printf("%d",c[j]);
	}
}
