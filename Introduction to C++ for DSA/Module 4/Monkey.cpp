#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
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
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>()); // descending
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}