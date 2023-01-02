#include<iostream>
using namespace std;

class Average
{
    public:

    static float getAverage(float num1, float num2, float num3)
    {
        return (num1+num2+num3)/3;
    }
};

int main()
{
    system("clear");
    
    float a,b,c;
    cout<<"Enter 3 Numbers : ";
    cin>>a>>b>>c;

    cout<<"Average is : "<<Average::getAverage(a,b,c)<<endl;
}