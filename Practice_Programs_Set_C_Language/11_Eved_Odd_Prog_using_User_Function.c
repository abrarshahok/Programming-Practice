#include<stdio.h>
void evenodd(int a);
void main (void)
{
	int b;
	printf("Enter Number to Check Whwther Even or Odd :");
	scanf("%d",&b);
	evenodd(b);
	getch();
}

void evenodd(int a)

{
	int c;
	c=a%2;
	
	if (c==0)
	printf("The Number is Even");
	
	else
	printf("The Number is Odd");
}
