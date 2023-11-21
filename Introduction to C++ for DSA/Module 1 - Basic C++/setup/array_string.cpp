#include <iostream>
// #include <algorithm>
#include <string>
#include <string.h>
using namespace std;
// #include <utility>

int main()
{
    char s[100];
    // cin >> s;
    // fgets(s, 100, stdin);
    int a;
    cin >> a;
    getchar();

    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
    cout << strlen(s) << endl;

    // int n;
    // cin >> n;
    // int ar[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << endl;
    // }

    return 0;
}