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
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        // if (i % 2 == 0)
        // {
        //     s += a[i];
        // }
        s += a[i];
    }
    cout << s << endl;
    return 0;
}
