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
    void operator++()
    {
        for (int i = 0; i < len; i++)
        {
            this->name[i]++;
        }
    }
    ~Student() { delete[] name; }
};
int main()
{
    Student s1("CPP", 3, 202114000);
    ++s1;
    s1.print();
}