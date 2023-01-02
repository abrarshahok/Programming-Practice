#include <stdio.h>

main()
{
    int a[5];
    int large;
    printf("Enter Numbers of Array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    large = largest(a);
    printf("The largest number is %d",large);
}

int largest(int a[]){
    int large = 0;
    for (int i = 0; i < 5; i++)
    {
        if (large < a[i])
        {
            large = a[i];
        }
    }
    return large;
}