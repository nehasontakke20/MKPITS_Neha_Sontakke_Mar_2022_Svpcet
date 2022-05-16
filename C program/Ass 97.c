#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
printf("Enter z:");
scanf("%d",&z);
if(x<y && y<z )
{
	printf("\ny is greater %d",y);
}
else

{
	printf("1");
}
if(x<y && y<z )
{
	printf("\nz is greater %d",z);
}
else

{
	printf("0");
}

}
