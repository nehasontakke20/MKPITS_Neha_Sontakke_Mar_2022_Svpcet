#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("Enter 5 numbers of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
		{
			if(i<5)
			{
			printf("a[%d]=%d\n",a[i],i);	
			}
		}	
}
