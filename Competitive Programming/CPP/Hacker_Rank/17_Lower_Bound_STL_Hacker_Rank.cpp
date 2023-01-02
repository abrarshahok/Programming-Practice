#include<bits/stdc++.h>
using namespace std;

int main(){
    system("clear");
    int n,e,Elements;
    cin>>n;
    vector <int> vec;
    for(int i=0; i<n; i++){
        cin>>Elements;
        vec.push_back(Elements);
    }
    cin>>e;
    for(int i=0; i<e; i++){
        int temp;
        cin>>temp;
        vector <int> :: iterator iter;
        iter = lower_bound(vec.begin(),vec.end(),temp);
        cout<<"Value of Iter : "<<*iter<<endl;
            if(*(iter+1) == temp || *iter == temp)
            {
                cout<<"Yes "<<(iter+1)-vec.begin()<<endl;
            }
            else{
                cout<<"No "<<(iter+1)-vec.begin()<<endl;
            }
        }
    }

