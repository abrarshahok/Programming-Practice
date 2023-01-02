#include<bits/stdc++.h>
using namespace std;

int main(){
    system("clear");
    long long i,n,Elements,er1,begin,end;
    cin>>n;
    vector <long long int> vec1;

    for(i=0; i<n; i++){
        cin>>Elements;
        vec1.push_back(Elements);
    }

    cin>>er1>>begin>>end;
    
    vec1.erase(vec1.begin()+er1-1);
    vec1.erase(vec1.begin()+begin-1,vec1.begin()+end-1);

    long long size = vec1.size();
    cout<<size<<endl;
    for(i=0; i<size; i++){
        cout<<vec1[i]<<" ";
    }
}