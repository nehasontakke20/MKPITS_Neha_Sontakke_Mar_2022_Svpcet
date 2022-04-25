#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j, m1[2][2];
	printf("Enter 2x2 matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	//dis
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=%d",i,j,m1[i][j]);
		}
	}
}
