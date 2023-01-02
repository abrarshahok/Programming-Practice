#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int i,j,num1,num2;

    cout<<"Enter Numbers : ";
    cin>>num1>>num2;

    cout<<"Prime Numbers Between "<<num1<<" and "<<num2<<" are : ";

    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<=num2;j++)
        {
            if(i%j==0)
            {
                break;
            }
            
        } 

        if(i==j)
        {
            cout<<i<<" ";
        } 
    }

    cout<<endl;
    return 0;

    
}