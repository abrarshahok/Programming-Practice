#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    system("clear");
    int arr[3][3],i,j,swap;

    cout<<"Enter Arrays Elements\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Real Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            swap=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=swap;
        }
    }

    cout<<"Matrix After Transpose"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}