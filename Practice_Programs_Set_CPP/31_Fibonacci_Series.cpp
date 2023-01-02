#include<iostream>
using namespace std;

void fibonacci(int num){
    int n1=0,n2=1;
    for(int i=1; i<=num; i++){
        cout<<n1<<" ";
        int n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}

int main(){
    system("clear");
    int n;
    cout<<"Enter Number to Find Fibonacci Series : ";
    cin>>n;
    cout<<"Fibonacci Series is : ";
    fibonacci(n);
    return 0;
}