#include<iostream>
using namespace std;

int pow(int n, int p){
    int pow=n;
    for(int i=1; i<p; i++){
        pow*=n;
    }

    return pow;
}

int main(){
    int base,power;
    cout<<"Enter Base  : ";
    cin>>base;
    cout<<"Enter Power : ";
    cin>>power;
    int result = pow(base,power);
    cout<<"Result : "<<result<<endl;
}