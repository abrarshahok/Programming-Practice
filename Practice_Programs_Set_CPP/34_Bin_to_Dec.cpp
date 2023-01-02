#include<iostream>
#include<math.h>
using namespace std;

int Bin_To_Dec(long long n){
    int rem;
    int i = 0;
    long long dec=0;
    while(n!=0){
        rem = n%10;
        n = n/10;
        dec+= rem*pow(2,i);
        i++;
    }
    return dec;
}

int main(){
    system ("clear");
    int bin;
    cout<<"Enter Binary Number : ";
    cin>>bin;
    int dec = Bin_To_Dec(bin);
    cout<<"("<<bin<<")2"<<" = ("<<dec<<")10"<<endl;
}