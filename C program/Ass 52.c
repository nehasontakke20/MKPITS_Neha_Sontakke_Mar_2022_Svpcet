#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter integer number:");
	scanf("%d",&a);
	printf("\nInteger value =%d",a);
	a<<=2;
	b=a;
	printf("\nThe left shifted data is =%d",b);
}
