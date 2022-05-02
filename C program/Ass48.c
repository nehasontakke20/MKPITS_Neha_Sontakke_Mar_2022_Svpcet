#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[6],i,small,pos;
	printf("Enter number\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		if(i==0 || small>a[i])
		{
			small =a[i];
			pos=i+1;
		}
	}
	printf("smallest number:%d,at position %d",small,pos);
}
