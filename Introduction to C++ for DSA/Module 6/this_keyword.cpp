#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void hello()
    {
        cout << "heloo" << endl;
    }
};
int main()
{
    Person mukta("Mukta", 25);
    cout << mukta.name << " " << mukta.age << endl;

    return 0;
}