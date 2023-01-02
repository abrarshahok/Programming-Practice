//Q9: Write a Program to Calculate the Factorial of a given number using for Loop?

#include<stdio.h>
main()
{
    int a,b,c=1;
    
    printf("Enter Number to Find Factorial\n");
    scanf("%d",&b);
    
    for(a=1;a<=b;a++)
    
    c=c*a;
    
	printf("The Factorial of %d is : %d \n",b,c);
	
	getch();
	
}
