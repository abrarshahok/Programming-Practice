#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;
int main(){
    system("clear");
    int rem,num,Duplicate_Num;
    int Armstrong = 0;
    cout<<"Enter Number to Check if it is Armstrong Number or Not : ";
    cin>>num;
    Duplicate_Num = num;
    string str = to_string(Duplicate_Num);
    int digits = str.length();

    while(Duplicate_Num>0){
        rem = Duplicate_Num%10;
        Armstrong+=pow(rem,digits);
        Duplicate_Num/=10;
    }

    if(num==Armstrong){
        cout<<"Number is Armstrong"<<endl;
    }
    else{
        cout<<"Number is not Armstrong"<<endl;
    }
}