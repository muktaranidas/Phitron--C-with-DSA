#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    cout << "fun: " << a << endl;
    *a = 100;
    // cout << "fun : " << &a << endl;
    return a;
}
int main()
{
    int *p = fun();
    cout << "main :" << *p << endl;

    // int *a = new int;
    // *a = 10;
    // cout << *a << endl;

    // int x = 10; // static

    return 0;
}