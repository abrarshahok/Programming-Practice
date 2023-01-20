#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    long double temp;
    long double ans=0;
    char op ='+';
    cout<<"Enter Equation : ";
    getline(cin,str);
    stringstream ss(str);
    while(ss>>temp){
        if(op == '+'){ans+=temp;}
        else if(op == '-'){ans-=temp;}
        else if(op == '*'){ans*=temp;}
        else if(op == '/'){ans/=temp;}
        else{continue;}
        ss>>op;
    }
    cout<<"Answer         : "<<ans<<endl;
}

