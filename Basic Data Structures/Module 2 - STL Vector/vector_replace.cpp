#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    vector<int> v = {1, 2, 3, 4, 2, 6, 7, 8, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end() - 1, 2, 100);

    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}