#include<iostream>
using namespace std;

template <class T>
T Pi = T (3.1415926535979); 

template <class T>
T area_of_Circle(const T &r){
    return (r*r)*Pi<T>;
}

int main(){
    cout.precision(20);

    cout<<"Area of Circle : "<<area_of_Circle <long double> (2)<<endl;
}