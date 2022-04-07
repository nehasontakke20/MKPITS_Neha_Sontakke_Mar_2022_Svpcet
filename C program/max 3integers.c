#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,res,max;
	printf("input the 1st integer:");
	scanf("%d",&a);
	printf("input the 2nd integer:");
	scanf("%d",&b);
	printf("input the 3rd integer:");
	scanf("%d",&c);
	res=(a+b+abs(a-b))/2;
	max=(res+c+abs(res-c))/2;
	printf("\nmaximum value of three integers:%d",max);
	printf("\n");
}
