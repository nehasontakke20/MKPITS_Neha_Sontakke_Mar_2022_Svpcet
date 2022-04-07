#include<stdio.h>
#include<conio.h>
void main()
{
	float number[5];
	int j, pr=0 ,nr=0;
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
		}
		else if(number[j]<0)
		{
		nr++;	
		}
	}
	printf("\nnumber of positive number: %d",pr);
	printf("\nnumber of negative number: %d",nr);
	printf("\n");
	}
