#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10; // stack er moddhe save hocche
    int *p;     // address variable k amra pointer name chini
    p = &a;     // a er address hold kortese , reference kora
    *p = 100;   // dereference
    cout << a << endl;

    return 0;
}