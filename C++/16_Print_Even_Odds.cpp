#include<iostream>
using namespace std;
int main()
{
    int arr[10],even=0,odd=0;
    
    cout<<"Enter 10 Numbers"<<endl;
    for(int i=1;i<=10;i++)
    
    {
        cin>>arr[i];
    }

    for(int i=1;i<=10;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }


    cout<<"Even Number are = "<<even<<endl;
    cout<<"Odd Numbers are = "<<odd;

    return 0;

}