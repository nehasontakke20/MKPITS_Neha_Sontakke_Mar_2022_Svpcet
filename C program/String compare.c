#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int s;
	char n1[10]={"ram"};
	char n2[10]={"ram"};
	s=strcmp(n1,n2);
	if(s==0)
	{
		printf("names are equal");
	}
}
