#include<iostream>
using namespace std;

// int count = 0;

int digitsOfNum(int n){
    // Use Static KeyWord
    static int count = 0;
    if(n > 0){
        count++;
        digitsOfNum(n/10);
    }

    return count;
}

int main(){
    system("clear");
    int num;
    cout<<"Enter Number     : ";
    cin>>num;
    cout<<"Number of Digits : "<<digitsOfNum(num)<<endl;
}