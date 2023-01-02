//Q2: Write a Program to calculate the area of Circle?

#include<stdio.h>
void main (void)
{
	int r;
	float pie,a;
	pie=3.14;
	
	printf("Enter Radius\n");
	scanf("%d",&r);
	
	a=pie*r*r;
	printf("Area of Circle is %f\n",a);
	
	getch();
	
	
}
