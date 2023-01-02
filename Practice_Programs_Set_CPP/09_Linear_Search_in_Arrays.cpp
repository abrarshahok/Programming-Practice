#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)

{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           return i;
        }

    } 
    return 0;   

}


int main()
{
    system("clear");
    int n,key;

    cout<<"Enter Number of Elements     : ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter Elements of Array      : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Key to Find its Index  : ";
    cin>>key;

    cout<<"Element is at Index          : ";
    cout<<linearSearch(arr,n,key)<<endl;
}