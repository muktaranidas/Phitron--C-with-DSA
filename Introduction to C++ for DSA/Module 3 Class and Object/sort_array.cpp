#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n); // ascending
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

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