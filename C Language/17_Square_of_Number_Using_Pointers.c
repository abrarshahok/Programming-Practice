#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p1,num1,sqr;

    printf("Enter Number : ");
    scanf("%d",&num1);

    p1=&num1;

    sqr=(*p1)*(*p1);

    printf("Square is %d",sqr);
}