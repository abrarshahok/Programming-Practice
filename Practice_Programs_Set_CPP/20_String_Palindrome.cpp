#include<iostream>
#include<cstring>
using namespace std;

int main(){
    system("clear");
    string org_string,rev_string;
    cout<<"Enter String to Check if it is Palindrome or Not\n(Please Enter Characters in Lower Case) : ";
    cin>>org_string;

    for(int i = org_string.length()-1; i>=0; i--){
        rev_string+=org_string.at(i);
    }

    if(org_string==rev_string){
        cout<<"String is Palindrome"<<endl;
    }
    else{
        cout<<"String is Not Palindrome"<<endl;
    }
}