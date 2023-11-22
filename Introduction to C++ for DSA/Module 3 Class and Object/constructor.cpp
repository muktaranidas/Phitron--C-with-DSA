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
    Student mukta(33, 15, 3.20);
    cout << mukta.roll << " " << mukta.cls << " " << mukta.gpa << endl;
    Student proma(37, 14, 3.80);
    cout << proma.roll << " " << proma.cls << " " << proma.gpa << endl;

    return 0;
}