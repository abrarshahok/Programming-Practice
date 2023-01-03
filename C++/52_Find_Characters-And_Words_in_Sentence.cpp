#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int words=0,chars=0,count=0;
    cout<<"Enter String : ";
    getline(cin,str);

    int strLen = str.length();

    while(count<strLen){
        
        if(str.at(count) == ' '){
            words++;
        }
        else{
            chars++;
        }

        count++;
    }

    cout<<"Words      : "<<words+1<<endl;
    cout<<"Characters : "<<chars<<endl;
}