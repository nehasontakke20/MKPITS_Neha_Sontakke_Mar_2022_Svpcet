#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10],bak[10],s;
	printf("enter any name");
	scanf("%s",name);
	//taking backup of name
	strcpy(bak,name);
	//reversinng string strrev
	strrev(name);
	//compare reverse str with original string
	s=strcmp(bak,name);
	if(s==0)
	{
		printf("%s is palisrome",bak);
	}
	else
	{
		printf("%s is not palidrome",bak);
	}
}
