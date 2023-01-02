#include<iostream>
using namespace std;

int sumofDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10 + sumofDigits(n/10));
}

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int sum = sumofDigits(num);
    cout<<"The Sum of Digits of "<<num<<" is : "<<sum<<endl;
}