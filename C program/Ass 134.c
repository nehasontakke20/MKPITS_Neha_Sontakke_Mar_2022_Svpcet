#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,t=0,count=0;
	printf("Enter the size of array:");
	scanf("%d",&num);
	int a[num];
	printf("Enter the array of element:");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		if(i+1==num-1)
		{
			break;
		}
	}
	printf("New array is:");
	for(i=0;i<num;i++)
	{
		printf("%d",a[i]);
	}
}
