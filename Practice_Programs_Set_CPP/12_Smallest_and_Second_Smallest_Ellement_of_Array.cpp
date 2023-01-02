#include<iostream>
using namespace std;
int main()
{
    system("cls");

    int arr[10],first,second,i;
    
    cout<<"Enter 10 Numbers :"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    first=arr[0];

    for(i=0;i<10;i++)
    {
        if(first>arr[i])
        first=arr[i];
    }

    second=arr[0];

    for(i=0;i<10;i++)
    {
        if(second!=first && second>arr[i] && arr[i]!=first)
        second = arr[i];
    }

    cout<<"First smallest Element is : "<<first<<endl;
    cout<<"Second Smallest Element is : "<<second<<endl;

    return 0;


}