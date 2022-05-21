#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter an array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter an array element\n");
		scanf("%d",&a[i]);
	}
	if(a[0]==a[n-1])
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
}
