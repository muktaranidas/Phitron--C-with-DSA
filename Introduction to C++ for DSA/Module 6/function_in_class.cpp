#include <bits/stdc++.h>
using namespace std;
// class
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    // constructor
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    };
    void hello()
    {
        cout << name << " " << age << endl;
        cout << "Hello inside object" << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    // object
    Person mukta("Mukta", 25, 99, 100);
    mukta.total_marks();
    cout << mukta.total_marks() << endl;
    // mukta.hello();
    // cout << mukta.name << " " << mukta.age << endl;

    return 0;
}