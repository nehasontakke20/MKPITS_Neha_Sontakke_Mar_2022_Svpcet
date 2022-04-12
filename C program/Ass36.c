#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,a1,i,sum=0;
	printf("input the 1st integer:");
	scanf("%d",&a);
	printf("input the 2nd integer:");
	scanf("%d",&b);
	if(a>b)
	{
		a1=b;
		b=a;
		a=a1;
	}
	for(i=a+1; i<b; i++)
	
		if((i%7)==2 || (i&7)==3)
	
	printf("%d\n",i);
}
	
