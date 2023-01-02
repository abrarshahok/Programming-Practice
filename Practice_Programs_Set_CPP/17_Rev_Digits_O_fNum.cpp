#include<iostream>
using namespace std;

int revNum(int n){
    int rem,rev=0;
    while(n>0){
        rem = n%10;
        rev=rev*10+rem;
        n=n/10; 
    }
    return rev;
}

int main(){

    int num;
    cout<<"Enter Number 2 Digits Number to Reverse it : ";
    cin>>num;
    while(num<10){
        cout<<"Number is 1 Digit!\nPlease Re-Enter Number : ";
        cin>>num;
    }
    cout<<"The Reverse of "<<num<<" is : "<<revNum(num)<<endl;
    
}