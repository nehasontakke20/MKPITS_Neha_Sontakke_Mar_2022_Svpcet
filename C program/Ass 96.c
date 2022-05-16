#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
z=x+y;
if(x==y+z|| y==x+z|| z==x+y)
{
	printf("add two number %d",z);
}
}
