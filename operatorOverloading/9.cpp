#include <bits/stdc++.h>
using namespace std;
class Student
{
    char *name;
    int len;
    int roll;

public:
    Student(char *name, int len, int roll)
    {
        this->len = len;
        this->name = new char[len + 1];
        for (int i = 0; i < len; i++)
            this->name[i] = name[i];
        this->name[len] = '\0';
        this->roll = roll;
    }
    void print()
    {

        cout << name << " " << len << " " << roll << endl;
    }
    char &operator[](int x) { return name[x]; }

    ~Student() { delete[] name; }
};
int main()
{
    Student s1("cpp", 3, 202114000);
    if (s1[0] >= 'a' && s1[0] <= 'z')
    {
        s1[0] = s1[0] - 32;
    }
    s1.print();
}