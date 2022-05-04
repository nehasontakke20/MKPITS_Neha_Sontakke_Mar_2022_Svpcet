#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
void main()
{
	fun();//function called in main
}
void fun()
{
//	int i=1;
if(i==9)
return;
	printf("%d",i);
	i++;
	fun();
}
