#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str1,str2;
    string newS1,newS2;

    cin>>str1>>str2;
    cout<<str1.length()<<" "<<str2.length()<<endl;
    cout<<str1<<str2<<endl;
    newS1 = str1;
    newS2 = str2;
    newS1.at(0) = newS2.at(0);
    str2.at(0) = str1.at(0); 
    cout<<newS1<<" "<<str2;
}