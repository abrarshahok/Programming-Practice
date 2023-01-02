#include<bits/stdc++.h>
using namespace std;

void Display(vector<int> &v){
    vector<int> :: iterator iter;
    for(iter=v.begin(); iter != v.end(); iter++){
        cout<<*iter<<endl;
    }
}

int main(){
    vector <int> vec;
    string str;
    int temp;
    char ch;
    getline(cin,str);
    stringstream ss(str);

    while(ss>>temp){
        vec.push_back(temp);
        ss>>ch;
    }
    
    Display(vec);
}

