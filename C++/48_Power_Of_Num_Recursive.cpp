#include<iostream>
using namespace std;

double myPow(double x, int n){
    if(n!=0){
        return (x*(myPow(x,n-1)));
    }
    else return 1;
}

int main(){
    system("clear");
    int base,power;
    cout<<"Enter Base  : ";
    cin>>base;
    cout<<"Enter Power : ";
    cin>>power;
    int pow = myPow(base,power);
    cout<<base<<"^"<<power<<" = "<<pow<<endl;
}