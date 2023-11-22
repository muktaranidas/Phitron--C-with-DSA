#include <iostream>
using namespace std;
class Array
{
public:
    int size;
    int sum;
    int *array;
    Array(int size, int sum, int *array)
    {
        this->size = size;
        this->sum = sum;
        this->array = array;
    }
    bool isPossible()
    {
        for (int i = 0; i < size - 2; ++i)
        {
            for (int j = i + 1; j < size - 1; ++j)
            {
                for (int k = j + 1; k < size; ++k)
                {
                    if (array[i] + array[j] + array[k] == sum)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int *a = new int[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        Array problem(n, s, a);
        if (problem.isPossible())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        delete[] a;
    }

    return 0;
}
