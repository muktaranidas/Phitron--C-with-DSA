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
Student *compare_student(Student *st1, Student *st2)
{
    return st1->age > st2->age ? st1 : st2;
}

Student *make_student()
{
    Student *st = new Student();
    st->age = 50;
    return st;
    // Student st;
    // st.age = 50;
    // Student *pst = &st;
    // // cout << &st << endl;
    // return pst;
}
int fun()
{
    int x = 10;
    cout << &x << endl;
    return x;
}
int main()
{
    Student *newStudent = make_student();
    Student st;
    cout << newStudent->age << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << newStudent->age << endl;
}
