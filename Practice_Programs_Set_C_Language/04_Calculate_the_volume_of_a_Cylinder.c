//Q3: Write a program to calculate the volume of a Cylinder given its radius and Height?

#include<stdio.h>
void main (void)
{
	int r;
	float v,pie,h;
	pie=3.14;
	
	printf("Enter Radius\n");
	scanf("%d",&r);
	
	printf("Enter Height\n");
	scanf("%f",&h);
	
	v=pie*(r*r)*h;
	printf("The Volume of Cylinder is :%f",v);
	
	getch();
	
}
