#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,pos,v,n;
	printf("Enter the umer of array n=");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to insert v=\n");
	for(i=n;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	pos=0;
	a[pos]=v;
	for(i=0;i<=n+1;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
