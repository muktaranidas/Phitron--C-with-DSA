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
Student *fun()
{
    Student mukta(33, 17, 4.00);
    Student *p = &mukta;
    return p;
}
int main()
{
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    return 0;
}