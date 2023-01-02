//Q7: Write a Program to find the greatest of Four Numbers Entered by the User?

#include<stdio.h>
void main(void)
{
	int a,b,c,d;
	
	printf("Enter Four Desired Numbers:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if (a>b&&a>c&&a>d)
	    printf("%d is The Greatest",a);
	else if (b>c&&b>d)
	    printf("%d is The Greatest",b);
	else if (c>d)
	    printf("%d is The Greatest",c);
	else
	    printf("%d is The Greatest",d);
	
	getch();
}
