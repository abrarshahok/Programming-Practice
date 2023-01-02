#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0,e=n,mid;
    
    cout<<"Element is at Index : ";

    while(s<=e)

    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }

    return 0;
}
int main()
{
    int n,key,arr[n];

    cout<<"Enter Number of Elelment : ";
    cin>>n;
    
    cout<<"\nEnter Elements of Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nEnter Key to Find its Index"<<endl;
    cin>>key;
    
    cout<<binarySearch(arr,n,key);
}