#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,f=0;
	printf("\nEnter 5 no of array:");
for(i=0;i<5;i++)
{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	
}
for(i=0;i<5;i++)
{
	int i=a[i];
	if(a[i]== j && a[i+1]==j && a[i+2]==j)
{
	printf("\nTriple");
f=1;
}
}
if(f==0)
{
	printf("Not triple");
}
}

