#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line))
    {
        for (char &c : line)
        {
            if (isalpha(c) && islower(c))
            {
                c = tolower(c);
            }
            else
            {
                c = ' ';
            }
        }
        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
        sort(line.begin(), line.end());
        cout << line << endl;
    }

    return 0;
}
