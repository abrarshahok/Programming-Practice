#include<iostream>
using namespace std;

int Sorting(int arr[],int n);

int main()
{
    system("clear");
    int arr[10],i,n;
    cout<<"Enter Number of Elements of Array : ";
    cin>>n;

    cout<<"Enter Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Sorting(arr,n);

    cout<<"First Smallest  : "<<arr[n-n]<<endl;
    cout<<"Second Smallest : "<<arr[n-n+1]<<endl;
    cout<<"First Largest   : "<<arr[n-1]<<endl;
    cout<<"Second Largest  : "<<arr[n-2]<<endl;

    return 0;
}

int Sorting(int arr[],int n)
{
    int i,j;
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}