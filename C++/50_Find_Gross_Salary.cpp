#include<iostream>
using namespace std;

int main(){
    double bs,hr,da,gross_salary;

    cout<<"Enter Basics Salary of Ahmed : ";
    cin>>bs;


    if(bs>=1500){
        hr = 500.00;
        da = bs*(98.00/100.00);
        gross_salary = (bs + hr + da);
    }

    else{
        hr = bs*(10.00/100.00);
        da = bs*(90.00/100.00);
        gross_salary = (bs + hr + da);
    }

    cout<<"Ahmed's Gross Salary is : "<<gross_salary<<endl;
}