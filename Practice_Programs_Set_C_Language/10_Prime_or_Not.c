//Q10: Write a Program to check whether a given number is Prime or Not, Using Loops?

#include<stdio.h>
void main (void)
{
	int num,count=0;
	
	printf("Enter Positive Number : ");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++){
		if(num==1){
			printf("Prime Number");
			break;
		}
		else if ((num%i) == 0)
		{
			count++;
		}
	}

	if(count == 2){
		printf("Prime Number\n");
	}
	else{
		printf("Not a Prime Number\n");
	}

}
