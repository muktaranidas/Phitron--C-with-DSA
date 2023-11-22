#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
};
int main()
{

    Student a;
    cin.getline(a.name, 100);
    getchar();
    cout << a.name << endl;
    return 0;
}