#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("\nIput an integer:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>=20 && x<=50 || y<=20 && y<=50 || z<=20 && z<=50)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
