#include <iostream>
#include <algorithm>
using namespace std;
#include <utility>
// void my_swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout
        << a << "  " << b << endl;

    // int minimum = min({a, b, c, d});
    // int maximum = max({a, b, c, d});
    // cout << minimum << " " << maximum << endl;
    // if (a < b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }

    return 0;
}