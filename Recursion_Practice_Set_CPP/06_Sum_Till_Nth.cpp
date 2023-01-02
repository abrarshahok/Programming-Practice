#include<iostream>
using namespace std;

int sumOfn(int n){
    if(n==0){
        return 0;
    }

    else{
        return n+sumOfn(n-1);
    }
}

int main(){
    system("clear");
    int n;
    cout<<"Enter Number to Find Sum of Numbers till Nth Number : ";
    cin>>n;
    cout<<"The Sum till "<<n<<"th Number is : "<<sumOfn(n)<<endl;
}