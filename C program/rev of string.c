#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[20],swap;
	int len,i;
	printf("enter of string");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len/2;i++)
	{
		swap=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=swap;
	}
	printf("reverse of string %s",a);
}
