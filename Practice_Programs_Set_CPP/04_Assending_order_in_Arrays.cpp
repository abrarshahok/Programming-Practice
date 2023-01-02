#include<iostream>
using namespace std;
int main()
{
    system("clear");

    int arr[25],i,j,temp,n;

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
    cout<<"The Accending Order of Elements is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}