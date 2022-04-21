#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
	int i;
	printf("Enter 10 number:");
	for(i=0;i<=10;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("array\n");
	for(i=0;i<=10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
