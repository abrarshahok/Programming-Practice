#include<iostream>
using namespace std;

int main()
{
    system("clear");
    int arr[5],i,j,n,temp;

    cout<<"Enter Number of Elements : ";
    cin>>n;

    cout<<"Enter Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"First Smallest  : "<<arr[n-n]<<endl;
    cout<<"Second Smallest : "<<arr[n-n+1]<<endl;
    cout<<"First Largest   : "<<arr[n-1]<<endl;
    cout<<"Second Largest  : "<<arr[n-2]<<endl;

    return 0;
}