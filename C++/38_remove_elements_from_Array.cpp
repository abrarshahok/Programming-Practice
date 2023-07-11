#include <iostream>
using namespace std;
int main()
{
    system("clear");

    int nums[5], target, n, count = 0;

    cout << "How Many Elements You want to Input : ";
    cin >> n;

    cout << "Enter Element of Arrays : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter Target : ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            continue;
        }
        count++;
    }
    cout << "Remaining Elements : " << count << endl;
    cout << "Elements are       : ";
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            continue;
        }
        else
        {
            cout << nums[i] << " ";
        }
    }
}