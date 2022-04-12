#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	printf("square of each one of the even values from 1 to specified value %d:\n",a);
	scanf("%d",&a);
	
	for(i=2; i<=a; i++)
	{
		if((i%2)==0);
		{
			printf("%d^2=%d\n",i,i*i);
		}
	}
}
