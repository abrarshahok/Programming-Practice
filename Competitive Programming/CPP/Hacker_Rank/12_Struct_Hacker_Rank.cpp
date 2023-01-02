#include<iostream>
using namespace std;

struct Info{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(){
    Info p1;
    cin>>p1.age;
    cin>>p1.first_name;
    cin>>p1.last_name;
    cin>>p1.standard;

    cout<<p1.age<<" "<<p1.first_name<<" "<<p1.last_name<<" "<<p1.standard<<endl;
}