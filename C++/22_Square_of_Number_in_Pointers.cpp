#include<iostream>
using namespace std;
int main()
{
    int num,*ptr1,sqr;

    cout<<"Enter Number:";
    cin>>num;

    ptr1=&num;

    sqr=*ptr1 * *ptr1;
    cout<<"\nThe Square ="<<sqr<<endl;
    return 0;

}