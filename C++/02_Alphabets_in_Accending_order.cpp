#include<iostream>
using namespace std;
int main()
{
    system("clear");
    char arr[27];
    int i,j,temp,n;

    cout<<"Enter Number of Alphabets : ";
    cin>>n;
    
    cout<<"Enter Alphabets in Mix : ";
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
    
    cout<<"The Accending Order is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}