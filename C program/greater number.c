#include<stdio.h>
#include<conio.h>
void main()
{
	int p1,p2,p3;
	printf("enter p1");
	scanf("%d",&p1);
	printf("enter p2");
	scanf("%d",&p2);
	printf("enter p3");
	scanf("%d",&p3);
	if(p1>p2 && p1>p3)
	{
	printf("p1 is greater %d",p1);	
	}
	else
	if(p2>p1 && p2>p3)
	{
		
	printf("p2 is greater %d",p2);
}
	else
	{
		printf("p3 is greater %d",p3);
	}
	
	
	

}
