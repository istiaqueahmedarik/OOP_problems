#include <bits/stdc++.h>
using namespace std;
class Student_Result
{
    int roll;
    int *course_code;
    float *gpa_per_course;
    float *credit_per_course;
    string term;

public:
    Student_Result(int roll, int *course_code, float *gpa_per_course, float *credit_per_course, string term)
    {
        this->roll = roll;
        this->course_code = course_code;
        this->gpa_per_course = gpa_per_course;
        this->credit_per_course = credit_per_course;
        this->term = term;
    }
    ~Student_Result()
    {
        delete course_code;
        delete gpa_per_course;
        delete credit_per_course;
    }
    void print()
    {
        cout << roll << " " << term << " " << course_code << " " << gpa_per_course << " " << credit_per_course << "\n";
    }
};
int main()
{
}