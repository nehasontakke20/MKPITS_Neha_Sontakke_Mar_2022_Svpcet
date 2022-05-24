#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i,c[2],j;
	for(i=0;i<5;i++)
	{
		printf("Enter an array element:");
		scanf("%d",&a[i]);
	}
	c[0]=a[0];
	c[1]=b[4];
	for(j=0;j<2;j++)
	{
		printf("%d",c[j]);
	}
	printf("\n");
}
