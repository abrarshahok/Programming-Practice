#include<iostream>
using namespace std;
int sumOfDigitsofNum(int n){
    int rem,sum=0;
    while(n>0){
        rem = n%10;
        sum = sum+rem;
        n=n/10;
    }

    return sum;
}

int main(){
    int num;
    cout<<"Enter Number 2 Digits Number to Find Sum of its Digits : ";
    cin>>num;
    while(num<10){
        cout<<"Number is 1 Digit!\nPlease Re-Enter Number : ";
        cin>>num;
    }
    cout<<"The Sum of Digits of "<<num<<" is : "<<sumOfDigitsofNum(num)<<endl;
}