//Q9: Write a Program to Calculate the Factorial of a given number using for Loop?

#include<stdio.h>
main()
{
    int a;
    double b;
    char ans;
    
    do 
    {
    double c=1;
    printf("Enter Number to Find Factorial\n");
    scanf("%lf",&b);
    
    for(a=1;a<=b;a++)

    {
        c=c*a;
    printf("%d",a);
    if (a==b)
    {
        break;
    }
    
    printf(" x ");

    }

    printf(" = %.1lf ",c);

    printf("\n Do you want Run program Again? (y/n)");
    ans=getche();
    system("cls");

    }
    while(ans=='y'||ans=='Y');


	return 0;
}

