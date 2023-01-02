#include<iostream>
using namespace std;

class Circle
{
    private:

    int radius;

    public:
    
    void setRadius(int r)
    {
        radius=r;
    }
    void getRadius()
    {
        cout<<radius;
    }
    void getArea(int area)
    {
        area=3.14*radius*radius;
        cout<<area;

    }
};    

int main()
{   
    Circle area;

    int r;

    cout<<"Enter Radius : ";
    cin>>r;
    area.setRadius(r);
    cout<<"\nRadius is : ";
    area.getRadius();
    cout<<"\nArea of Circle : ";
    area.getArea(r);

    return 0;

}