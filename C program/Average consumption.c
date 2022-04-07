#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b;
	printf("input total distance in km:");
	scanf("%d",&a);
	printf("input total fuel spent in liter:");
	scanf("%f",&b);
	printf("average consumption (km/lt)%.2f",a/b);
	printf("\n");
}
	
