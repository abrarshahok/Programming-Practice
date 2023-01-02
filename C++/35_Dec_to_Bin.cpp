#include<iostream>
#include<math.h>
using namespace std;

int Dec_to_Bin(long long n){
    int rem;
    int i=1;
    long long bin=0;

    while (n!=0)
    {
        rem = n%2;
        n = n/2;
        bin += rem*i;
        i*=10;
    }

    return bin;
    
}

int main(){
    system ("clear");
    long long dec;
    cout<<"Enter Decimal Number : ";
    cin>>dec;
    long long bin = Dec_to_Bin(dec);
    cout<<"("<<dec<<")10"<<"= ("<<bin<<")2"<<endl; 
}