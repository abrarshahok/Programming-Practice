#include<stdio.h>
void positivenegative(int a);
void main (void)
{
	int b;
	printf("Enter Number to Check Positive or Negative :");
	scanf("%d",&b);
	positivenegative(b);
	getch();
}

void positivenegative(int a)

{
	int b;
	b=a%2;
	
	{
	if (b>0)
	printf("The Number is Positive");
	
	else if(b<0)
	printf("The Number is Negative");
	
	else
	printf("You Entered Zero");
}
}
