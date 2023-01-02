/*

Simple Calculator Using Functions
By Abrar Ahmed Shahok
Roll No# 21BSCS-20
Assignment No# 1

*/

#include<iostream>
using namespace std;

void Addition();
void Subtraction();
void Multiplication();
void Division();

int main()
{
    system("clear");
    char choice,ans;
    
    do
    {
    cout<<"\n(+) : Addition   (-) : Subtraction  (*) : Multiplication  (/) : Division"<<endl;

    cout<<"Enter Your Choice : ";
    cin>>choice;

    switch(choice)
    {
        case '+':
        cout<<"\nYou Choosed Addition"<<endl;
        Addition();
        break;

        case '-':
        cout<<"\nYou Choosed Subtraction"<<endl;
        Subtraction();
        break;

        case '*':
        cout<<"\nYou Choosed Multiplication"<<endl;
        Multiplication();
        break;

        case '/':
        cout<<"\nYou Choosed Division"<<endl;
        Division();
        break;

        default:
        cout<<"\nInvalid Choice!!"<<endl;
    }
    cout<<endl<<"Do You Want to Run Program Again ?(Y/N) : ";
    cin>>ans;
    if(ans=='n'||ans=='N')
    {
        cout<<"Thanks for Using Calculator!!\nMade by Abrar Ahmed Shahok 21BSCS-20"<<endl;
        return 0;
    }
    }
    while(ans=='y'||ans=='Y');

    return 0;
}

void Addition()
{
    int num1,num2,sum;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    sum=num1+num2;
    cout<<"Ans : "<<num1<<"+"<<num2<<" = "<<sum<<endl;

}

void Subtraction()
{
    int num1,num2,sub;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    sub=num1-num2;
    cout<<"Ans : "<<num1<<"-"<<num2<<"="<<sub<<endl;
    
}

void Multiplication()
{
   
    int num1,num2,multi;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    multi=num1*num2;
    cout<<"Ans : "<<num1<<"*"<<num2<<" = "<<multi<<endl;  
}

void Division()
{
    float div,num1,num2;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    div=num1/num2;
    cout<<"Ans : "<<num1<<"/"<<num2<<" = "<<div<<endl;
}
