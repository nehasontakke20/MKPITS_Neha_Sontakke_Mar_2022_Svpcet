#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,a1,i,sum=0;
	printf("input 1st integer:");
	scanf("%d",&a);
	printf("input 2nd integer:");
	scanf("%d",&b);
	if(a>b)
	{
		a1=b;
		b=a;
		a=a1;
	}
       for(i=a; i<=b; i++)
	
		if((i%17) !=0) 
		sum+=i;
		{
			printf("%d",sum);
		}
   
}
