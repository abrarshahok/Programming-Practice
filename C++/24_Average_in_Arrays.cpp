#include<iostream>
using namespace std;
int main()
{
    system("cls");

    int sum,avg,grades[5][5]={{95,85,90,89,91},
                              {79,89,98,80,91},
                              {80,64,58,89,73},
                              {56,77,78,81,67},
                              {72,86,69,78,82}};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=grades[i][j];
        }
    }

    cout<<"Sum of Numbers = "<<sum<<endl;

    avg=sum/5;

    cout<<"Average Marks Per Students = "<<avg<<endl;

    return 0;

}