#include<stdio.h>
#include<conio.h>

void main()
 {
	float a1, b1, a2, b2, distance;
	printf("Input a1: ");
	scanf("%f", &a1);
	printf("Input b1: ");
	scanf("%f", &b1);
    printf("Input a2: ");
	scanf("%f", &a2);
	printf("Input b2: ");
	scanf("%f", &b2);
	distance = ((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1));
	printf("Distance between the two points: %f", (distance));
	printf("\n");
	
}
