#include<iostream>
using namespace std;

int FindFact(int n){
    if(n==0){
        return 1;
    }
    else
    return n*FindFact(n-1);    
}

int main(){
    system("clear");
    int n;
    cout<<"Enter Number to Find its Factorial : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<FindFact(n)<<endl;
}