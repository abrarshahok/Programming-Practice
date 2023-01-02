#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int Elements;
    cin>>size;

    vector <int> vec;
    for(int i=0; i<size; i++){
        cin>>Elements;
        vec.push_back(Elements);
    }
    
    sort(vec.begin(),vec.end());

    for(int i=0; i<size; i++){
        cout<<vec[i]<<" ";
    }
}