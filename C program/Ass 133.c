#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter an integer values:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==a[i+1]-1 && a[i]==a[i+2]-2)
        {
            printf("True");
            break;
        }
        else
        {
            printf("False");
            break;
        }
    }
}
