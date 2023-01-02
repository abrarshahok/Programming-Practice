#include<iostream>
using namespace std;
int main()
{
    system("clear");

    int mat1[3][3],mat2[3][3],sum[3][3],i,j;

    cout<<"\nEnter Elements of First Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }

    cout<<"\nEnter Elements of Second Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    
    cout<<"\nAddition of Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
