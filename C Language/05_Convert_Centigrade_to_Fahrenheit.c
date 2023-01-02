//Q4: Write a program to convert Centigrade Degrees Temprture to Fahrenheit?

#include<stdio.h>
void main(void)
{
	float celcius;
	float fahrenheit;
	
	printf("Enter Temprature in Celcius\n");
	scanf("%f",&celcius);
	
	fahrenheit=(9*celcius+(32*5))/5;
	
	printf("\n %f Celcius = %f Fahrenheit ",celcius,fahrenheit);
	
	getch();
	
	
}
