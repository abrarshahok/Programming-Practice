#include<iostream>
using namespace std;

int Fibonacci(int f, int s, int n){
    if(n==0){
        return 0;
    }
    else{
    int sum = f+s;
    cout<<sum<<" ";
    Fibonacci(s,sum,n-1);
    }
}

int main(){
    system("clear");
    int First=0,Second=1,Num;
    cout<<"Enter Number to Find Fibonacci Series till That Number : ";
    cin>>Num;
    cout<<"Fibonacci Series of First "<<Num<<" Numbers is : "<<First<<" "<<Second<<" ";
    Fibonacci(First,Second,Num-2);
    cout<<endl;
}