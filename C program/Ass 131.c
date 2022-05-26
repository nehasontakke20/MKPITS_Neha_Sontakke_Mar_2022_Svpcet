#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],f=0;     
    printf("Enter value of integer:\n");
	for(i=0;i<5;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
	  if(a[i]==5 && a[i+1]==5)
	  {
	  	f=1;
	  }
	}
	if(f==1)
	  {
	  	printf("True");
	  }
	  else
	  {
	  	printf("False");
	  }

}
