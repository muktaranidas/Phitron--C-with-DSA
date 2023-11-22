#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int totalMarks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student students[3];
        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }
        Student highestScorer = students[0];
        for (int i = 1; i < 3; ++i)
        {
            if (students[i].totalMarks > highestScorer.totalMarks ||
                (students[i].totalMarks == highestScorer.totalMarks && students[i].id < highestScorer.id))
            {
                highestScorer = students[i];
            }
        }
        cout << highestScorer.id << " " << highestScorer.name << " " << highestScorer.section << " " << highestScorer.totalMarks << endl;
    }

    return 0;
}
