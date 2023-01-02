//Q5: Write a Program to Check whether the Number is Divisible by 5 or Not?

#include<stdio.h>
void main (void)
{
	int a;
	
	printf("Enter Number:\n");
	scanf("%d",&a);
	
	if ((a%5)==0)
	printf("The Value is Divisible by 5");
	
	else
	printf("The Value is not divisible by 5");
	
	getch();	
	
}
