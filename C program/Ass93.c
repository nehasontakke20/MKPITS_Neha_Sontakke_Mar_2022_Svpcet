#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("\nEnter any number:");
	scanf("%d",&n);
	
	if(n%13==0 || n%13==1)
	{
		printf("multiple of 13");
	}
	else
	{
		printf("not multiple of 13");
	}
}
