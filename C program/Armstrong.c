#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,a1,b,c,n1,n2,n3,res;
printf("enter any 3 digit number :");
scanf("%d",&a1);
num=a1;
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;

n1=a*a*a;
n2=b*b*b;
n3=c*c*c;

res=n1+n2+n3;

if(a1==res)
{
	printf("your number is armstrong");
}
else
{
	printf("your number is not armstrong");
}
}

	

