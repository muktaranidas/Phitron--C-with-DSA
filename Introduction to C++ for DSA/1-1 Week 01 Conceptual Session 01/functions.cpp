// #include <bits/stdc++.h>
// using namespace std;
// // pass by value
// void swap_two(int x, int y)
// {
//     // formals parameters
//     int tmp = x;
//     x = y;
//     y = tmp;
// }
// int main()
// {
//     int a = 10, b = 40;
//     swap_two(a, b); // actual parameters
//     cout << a << " " << b << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // pass by reference
// void swap_two(int *x, int *y)
// {
//     // formals parameters
//     int tmp = *x; // x ke derefernce korlam mane ki hocche value chole ashche
//     *x = *y;
//     *y = tmp;
// }
// int main()
// {
//     int a = 10, b = 40;
//     swap_two(&a, &b); // actual parameters
//     cout << a << " " << b << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
// pass by address
void swap_two(int &x, int &y)
{
    // formals parameters
    int tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    int a = 10, b = 40;
    swap_two(a, b); // actual parameters
    cout << a << " " << b << endl;

    return 0;
}