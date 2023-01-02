//Q6: Write a Program to Determine whether a character Entered by the User is Lowercase or Uppercase or Not?

#include<stdio.h>
void main (void)
{
	char a;
	
	printf("Enter a Word\n");
	scanf("%c",&a);
	
	if (a>='a' && a<='z')
	   printf("Lower Case");
	   
	else if (a>='A' && a<='Z')
	   printf("Uper Case");  
	   
	else
	   printf("Unknown");
	   
	getch();       
}
