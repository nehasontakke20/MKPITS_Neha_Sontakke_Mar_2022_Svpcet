#include<stdio.h>
#include<conio.h>
void main()
{
	int j, number[5],total=0;
	printf("\ninput the first number:");
	scanf("%d",&number[0]);
	printf("\ninput the second number:");
	scanf("%d",&number[1]);
	printf("\ninput the third number:");
	scanf("%d",&number[2]);
	printf("\ninput the fourth number:");
	scanf("%d",&number[3]);
	printf("\ninput the fifth number:");
	scanf("%d",&number[4]);
	for(j=0; j<5; j++)
	{
		if ((number[j]%2) !=0)
		{
			total +=number[j];
		}
	}
	printf("\nsum of all odd value:%d",total);
	printf("\n");
}
	
