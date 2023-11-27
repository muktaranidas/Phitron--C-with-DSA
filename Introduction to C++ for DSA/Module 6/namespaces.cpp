#include <bits/stdc++.h>
using namespace std;
namespace Mukta
{
    int age = 25;
    void hello()
    {
        cout << "Mukta namespaces" << endl;
    }

};
namespace Proma
{
    int age = 23;
    void hello()
    {
        cout << "Proma namespaces" << endl;
    }

};
using namespace Mukta;
// using namespace Proma;
int main()
{
    cout << age << endl;
    hello();
    Proma::hello();
    // cout << age2 << endl;
    // cout << Mukta::age << endl;
    // cout << Proma::age2 << endl;
    return 0;
}