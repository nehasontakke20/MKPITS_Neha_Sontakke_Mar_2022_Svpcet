#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[30],t=0;
	printf("\nEnter any five number :");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter number:");
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==5 && (a[i+1]==5 || a[i+1]==6)) 
		{
			count=count+1;
		}
	}
		
		
		printf("%d",count);
	
}
