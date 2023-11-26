#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Mukta";
    string b = "Thakur";
    // a += b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;
    // a = a + "A";
    a.push_back('A');
    a.pop_back();
    a.pop_back();
    cout << a << endl;

    return 0;
}