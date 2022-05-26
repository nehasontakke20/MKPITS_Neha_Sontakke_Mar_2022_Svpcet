#include<stdio.h>
#include<conio.h>
void main()
{
	  int num,i,t=0,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&num);
    int a[num];
    printf("Enter the array element : \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        
    	if(a[i]==0)
    	{
    		count=count+1;
		}
    }
    while(count>0)
    {
    	for (i=0;i<num;i++)
    	{
        	if (a[i] == 0)
        	{
            	t=a[i];
            	a[i]=a[i+1];
            	a[i+1]=t;
        	}
    	}
    	count=count-1;
	}
     printf("New Array is : \n");
    for (i=0;i<num;i++)
    {
    	printf("%d  \n",a[i]);
	}
    
}	

