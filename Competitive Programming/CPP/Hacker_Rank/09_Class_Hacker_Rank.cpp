#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
public:
    int age, standard;
    string first, last;
    void set_age(int a)
    {
        age = a;
    }

    int get_age()
    {
        return age;
    }

    void set_standard(int s)
    {
        standard = s;
    }

    int get_standard()
    {
        return standard;
    }

    void set_first_name(string f)
    {
        first = f;
    }

    string get_first_name()
    {
        return first;
    }

    void set_last_name(string l)
    {
        last = l;
    }

    string get_last_name()
    {
        return last;
    }

    string to_string()
    {
        string a = std::to_string(age);
        string s = std::to_string(standard);
        string str = a + "," + first + "," + last + "," + s;

        return str;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string() << endl;

    return 0;
}