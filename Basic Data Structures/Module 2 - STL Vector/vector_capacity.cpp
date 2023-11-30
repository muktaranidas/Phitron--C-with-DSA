#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;
    v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(15);
    // cout << v.capacity() << endl;
    v.push_back(13);
    // cout << v.capacity() << endl;
    v.push_back(17);
    // v.clear();
    // cout << v.capacity() << endl;
    v.resize(2);
    v.resize(7, 100);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v[1] << endl;
    return 0;
}