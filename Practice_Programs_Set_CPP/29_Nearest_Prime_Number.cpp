#include<iostream>
using namespace std;

bool isPrime(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    system("clear");
    int num,smallest_prime=0,greatest_prime=0;
    cout<<"Enter Number to Check Nearest Prime Number to it : ";
    cin>>num;

    for(int j=1; j>0; j++){

        if(isPrime(num-j)){
            smallest_prime = num-j;
        }

        if(isPrime(num+j)){
            greatest_prime = num+j;
        }

        if(smallest_prime>0 || greatest_prime>0){
            break;
        }
    }

    if(smallest_prime>0){
        cout<<"Nearest Prime Less than "<<num<<" is    : "<<smallest_prime<<endl;
    }


    if(greatest_prime>0){
        cout<<"Nearest Prime Greater than "<<num<<" is : "<<greatest_prime<<endl;
    }
}