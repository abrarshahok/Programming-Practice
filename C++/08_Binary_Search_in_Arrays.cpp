#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0,e=n,mid;
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
    int n,key;

    cout<<"Enter Number of Elelment : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array  : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key to Find its Index : ";
    cin>>key;
    cout<<"Index : "<<binarySearch(arr,n,key);
}