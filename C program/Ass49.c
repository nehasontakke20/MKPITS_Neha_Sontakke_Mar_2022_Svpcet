#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,si;
	printf("principle,rate of intrest & time:\n");
	scanf("%d%d%d",&p,&r,&t);
	si=p*r*t/100;
	printf("simple intrest=%d",si);
}
