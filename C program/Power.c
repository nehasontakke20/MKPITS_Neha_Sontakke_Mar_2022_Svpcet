#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i,power=1;
	printf("Enter x & y value");
	scanf("%d%d",&x,&y);
	i=1;
	while(i<=y)
	{
		power=power*x;
		i++;
	}
	printf("power=%d",power);
}

