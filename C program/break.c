#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=5;c++)
		{
			if (r==2)
			break;
			printf("%d",c);
		}
		printf("\n");
	}
}
