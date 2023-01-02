/*
Q2(a): Write a Program to Calculate How Many Acres in 391,876 sqft Land?
    one Acre = 43,560 sqft

*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    system("clear");

    double acre=43560,land=391876,total_acre;

    total_acre=(land/acre);

    cout<<"Total Acres in "<<land<<" Sauare feets Land : "<<total_acre<<" Acres";
    cout<<"\nAfter Round Up Total Acres              : "<<round(total_acre)<<" Acres\n"<<endl;
}