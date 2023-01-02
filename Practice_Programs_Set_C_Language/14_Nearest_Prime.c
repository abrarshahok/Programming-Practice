//Write a Program to Check Nearest Prime Numbers to Given Number...

#include<stdio.h>

int prime(int a)
{
    int check=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            check++;
        }
    }
    if(check==2)
      return 1;
    else
      return 0;  
}

int main()


{
   system("cls");
   
   int num,prime1=0,prime2=0;

   printf("\n\nEnter Number to Print Nearest Prime Number :");
   scanf("%d",&num);

   for(int j=1;j>0;j++)
   {
       if(prime(num+j))
       {
         prime1=num+j;
       }

       if(prime(num-j))
       {
           prime2=num-j;          
        }
       if(prime1>0||prime2>0)
       {
           break;
       }
   }
   if(prime1>0)
   {
       printf("Nearest Prime Number Greater Than %d = %d \n",num,prime1);

   }
   if(prime2>0)
   {
       printf("Nearest Prime Number Less Than %d = %d \n",num,prime2);
   }
}

//By Abrar Ahmed Shahok 
