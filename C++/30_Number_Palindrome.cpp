#include<iostream>
using namespace std;

int revNum(int org_num){
    int rev_num=0;
    int rem;
        while(org_num>0){
        rem = org_num%10;
        rev_num = (rev_num * 10) + rem;
        org_num = org_num/10;
    }

    return rev_num;
}
int main(){
    system("clear");
    int org_num,rev_num;
    cout<<"Enter Number to Check if it is Palindrome or Not : ";
    cin>>org_num;
    rev_num = revNum(org_num);
    if(org_num == rev_num){
        cout<<"Number is Palindrome"<<endl;
    }
    else{
        cout<<"Number is not Palindrome"<<endl;
    }
}