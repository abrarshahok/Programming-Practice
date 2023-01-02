#include<iostream>
using namespace std;
int main(){
    string str = "Hello";
    string new_s = "";
    for(int i=str.size()-1;i>=0;i--){
        new_s+=str[i];
    }
    cout<<new_s;    
}