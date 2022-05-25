#include<stdio.h>
#include<conio.h>
void main()
{
	int i,res;
	printf("Enter any negative number:");
	scanf("%d",&i);
	if(i<0)
	{
		res = i*(-1);
		printf("result=%d",res);
	}
}
