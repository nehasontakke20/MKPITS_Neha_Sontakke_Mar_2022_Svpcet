#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sp,str;
	for(r=1;r<=12;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		for(str=1;str<=r;str++)
		{ 
			printf("*");
		}
	}
	printf("\n");
	
}
