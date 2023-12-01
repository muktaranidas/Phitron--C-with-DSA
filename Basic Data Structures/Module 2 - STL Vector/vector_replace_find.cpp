#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find
    vector<int> v = {1, 2, 3, 2, 3, 4, 2, 3, 3, 4, 5};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 100);
    // cout << *it;
    if (it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}