#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    int age;
    char name[100];

    Student()
    {
        // cout << "Default constructor called" << endl;
    }

    Student(int id, int age, char name[])
    {
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
    }
};
// void compare_student(Student *st1, Student *st2)
// {
//     cout << (st1->age > st2->age ? st1->name : st2->name) << " Younger" << endl;
// }
Student *compare_student(Student *st1, Student *st2)
{
    return st1->age > st2->age ? st1 : st2;
}
int main()
{
    char name[100];
    int id, age;
    cin >> id >> age;
    getchar();
    cin.getline(name, 100);
    Student *mukta = new Student(id, age, name);
    Student *proma = new Student();
    proma->age = 223;
    proma->id = 637;
    strcpy(proma->name, "Proma");
    // compare_student(mukta, proma);
    Student *younger = compare_student(mukta, proma);
    cout << younger->name << " is Younger" << endl;
    // cout
    //     << (*mukta).id << " "
    //     << (*mukta).age << " "
    //     << (*mukta).name << endl;
}
