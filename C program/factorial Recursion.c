#include<stdio.h>
#include<conio.h>
int num,i,fact=1;
void fun();
void main()
{
	fun();//function called in main
}
void fun()
{
i=num;
if(i>=1)
return;
	printf("fact==%d",fact);
	i--;
	fun();
}
