#include<iostream>
using namespace std;
int main()
{
    int first,second,*ptr1,*ptr2,sum;

    cout<<"Enter First Number:";
    cin>>first;
    cout<<"Enter Second Number:";
    cin>>second;

    ptr1=&first;
    ptr2=&second;

    sum=*ptr1 + *ptr2;
    cout<<"\nThe Sum ="<<sum<<endl;
    return 0;

}