//Q1: Write a program to calculate the area of a rectangle?

#include<stdio.h>
void main(void)
{
	int a,h,w;
	
	printf("Enter Height\n");
	scanf("%d",&h);
	
	printf("Enter Width\n");
	scanf("%d",&w);
	
	a=h*w;
	printf("\nArea of Rectangle is %d",a);

}
