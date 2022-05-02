#include<stdio.h>
#include<conio.h>
void main()
{
	int a[7],i,x;
	printf("Enter 1st of array\n");
	scanf("%d",&x);
	for(i=0;i<7;i++)
	{
		a[i]=x;
		x=3*x;
	}
	for(i=0;i<7;i++)
	{
		printf("[%d]=%d\n",a[i],i);
	}
}
