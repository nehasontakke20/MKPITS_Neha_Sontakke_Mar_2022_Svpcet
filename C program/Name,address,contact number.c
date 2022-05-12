#include<stdio.h>
void main()
{
	char name[20],address[50],contact_number[20];
	printf("Please enter your name");
	scanf("%s",&name);
	printf("\n");
	printf("Please enter your address");
	scanf("%s",&address);
	printf("\n");
	printf("Please enter your contact_number");
	scanf("%s",contact_number);
	printf("\n");
	printf("Your number is: %s",name);
	printf("\n");
	printf("Your address is :%s",address);
	printf("\n");
	printf("Your contact_number is : %s",contact_number);
}
