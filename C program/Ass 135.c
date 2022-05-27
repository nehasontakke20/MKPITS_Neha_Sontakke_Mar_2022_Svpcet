#include<stdio.h>
#include<conio.h>
void main()
{
	 int num,i,j;
	 printf("Enter size of array:");
	 scanf("%d",&num);
	 int a[num],b[num];
	 printf("Enter the array element:");
	 for(i=0;i<num;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("New array is:");
	 for(i=0;i<num;i++)
	 {
	 	if(a[i]==5)
	 	{
	 	for(i=i+1;j<num;j++)
		 {
		 printf("%d",a[i]);	
		 }	
		 break;
		}
	 }
}
