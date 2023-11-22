#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    // Student proma(33, 17, 4.20);
    Student *proma = new Student(33, 17, 4.20);
    cout << proma->roll << " " << proma->cls << " " << proma->gpa << endl;

    return 0;
}