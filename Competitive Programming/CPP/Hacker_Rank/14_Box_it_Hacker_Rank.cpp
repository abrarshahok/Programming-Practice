#include <iostream>
using namespace std;

class Box
{
public:
    int length, height, breadth;

    Box()
    {
        length = 0;
        height = 0;
        breadth = 0;
    }

    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    Box(const Box &obj)
    {
        this->length = obj.length;
        this->breadth = obj.breadth;
        this->height = obj.height;
    }

    int getLength()
    {
        return length;
    }

    int getHeight()
    {
        return height;
    }

    int getBreadth()
    {
        return breadth;
    }

    long long calcVolume()
    {
        long long vol = (long long)length * breadth * height;
        return vol;
    }

    bool operator<(Box A)
    {
        if (length < A.length)
        {
            return true;
        }
        else if (breadth < A.breadth && length == A.length)
        {
            return true;
        }
        else if (height < A.height && breadth == A.breadth && length == A.length)
        {
            return true;
        }

        return false;
    }
};

ostream &operator<<(ostream &out, Box b)
{
    out << b.length << " " << b.breadth << " " << b.height << endl;
    return out;
}

int main()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            cout << temp;
        }

        if (choice == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp;
        }
        if (choice == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }

        if (choice == 4)
        {
            cout << temp.calcVolume() << endl;
        }
        if (choice == 5)
        {
            Box NewBox(temp);
            cout << NewBox;
        }
    }
}