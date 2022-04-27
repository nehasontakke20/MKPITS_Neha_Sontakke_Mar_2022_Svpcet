#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,c=1;
	printf("Enter any no of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d",c,c++);
		}
	}
	printf("\n");
}
