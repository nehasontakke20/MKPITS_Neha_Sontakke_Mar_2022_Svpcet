#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,n_fact=1, nr_fact=1,coeff,i,j;
	for(n=0;n<10;n++)
	{
		for(r=0;r<=n;r++)
		{
			for(i=n;i>r;r++)
			{
			n_fact=n_fact*i;
			}
			for(j=n-r; j>0; j--)
			{
				nr_fact=nr_fact*j;
			}
			coeff=n_fact/nr_fact;
			printf("%d",coeff);
			if(n==r)
			printf("\n");
			n_fact=1;
			nr_fact=1;
		}
	}
}
