#include<iostream>
using namespace std;
int main()
{
    system("clear");

    int mat1[3][3],mat2[3][3],mult[3][3]={0},i,j,k;
    cout<<"Multiplication of 3x3 Matrix"<<endl;
    cout<<"\nEnter Elements of First Matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }

    cout<<"\nEnter Elements of Second Matrix : ";
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
            for(k=0;k<3;k++)
            {
                mult[i][j]=mult[i][j]+(mat1[i][k]*mat2[k][j]);

            }
            
        }
    }
    
    cout<<"\nMultiplication of Matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            cout<<mult[i][j]<<"\t";
            
        }
        cout<<endl;
        
    }
    
    

    return 0;
}
