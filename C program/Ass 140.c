#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,f=1;
    printf("Enter the size of array : ");
    scanf("%d",&num);
    int a[num];
    printf("Enter the array element : ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < num; i++)
    {
        if (a[i + 1] < a[i]) 
        {
            f=0;
        }
    }
    
    if(f==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

