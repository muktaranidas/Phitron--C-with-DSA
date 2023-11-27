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
    };
};
int main()
{
    Person *mukta = new Person("Mukta Thakur", 25);
    Person *proma = new Person("Proma Saha", 23);
    // mukta->name = proma->name;
    // mukta->age = proma->age;
    *mukta = *proma;
    cout << mukta->name << " " << mukta->age << endl;

    return 0;
}