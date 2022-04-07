#include<stdio.h>
#include<conio.h>
void main()
{
		float number[5],total=0,avr;
	int j, pr=0 ;
	printf("\ninput the first number:");
	scanf("%f",&number[0]);
	printf("\ninput the second number:");
	scanf("%f",&number[1]);
	printf("\ninput the third number:");
	scanf("%f",&number[2]);
	printf("\ninput the fourth number:");
	scanf("%f",&number[3]);
	printf("\ninput the fifth number:");
	scanf("%f",&number[4]);
	for(j=0; j<5; j++)
	{
		if(number[j]>0)
		{
			pr++;
			total+=number[j];
		}
	}
	avr=total/pr;
	printf("\nnumber of positive numbers:%d",pr);
	printf("\naverage value of the positive number: %.2f",avr);
	printf("\n");
}
