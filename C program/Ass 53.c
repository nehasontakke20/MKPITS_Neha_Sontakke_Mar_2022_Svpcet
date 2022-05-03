#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,rev_num;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("\nThe original nnumer =%d",num);
	while
	(num>=1)
	{
		a=num%10;
		rev_num=rev_num*10+a;
		num=num/10;
		printf("\nReverse number =%d",rev_num);
	}
}
