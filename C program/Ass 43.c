#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i;
	printf("Enter an integer:");
	scanf("%d",&x);
	printf("All are divisor of %d",x);
	for(i=0;i<=x;i++)
	{
		if((x%i==0))
		{
			printf("%d",i);
			printf("\n");
		}
	}
}
