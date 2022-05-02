#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,x;
	printf("Enter 5 number of array\n:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{
			a[i]=x;
		}
		else
		{
			a[i]=100;
		}
	}
	printf("Array values are\n:");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",a[i],i);
	}
}
