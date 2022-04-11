#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,y,total=0;
	printf("\ninput pair of numbe(8,4 :4,8):");
	printf("input first number of the pair:");
	scanf("%d",&x);
	printf("input second number of the pair:");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("the pair is in ascending oder");
	}
	else
	{
		printf("the pair is in descending order");
	}
}
