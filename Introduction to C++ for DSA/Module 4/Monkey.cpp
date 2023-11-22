#include <iostream>
#include <string>
#include <algorithm> // for sort function
using namespace std;

int main()
{
    string line;

    // Read input until EOF
    while (getline(cin, line))
    {
        // Iterate over each character in the line
        for (char &c : line)
        {
            // Check if the character is a lowercase letter
            if (isalpha(c) && islower(c))
            {
                // Convert the character to lowercase
                c = tolower(c);
            }
            else
            {
                // If it's not a lowercase letter, replace it with a space
                c = ' ';
            }
        }

        // Remove extra spaces
        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());

        // Sort the line in alphabetic order
        sort(line.begin(), line.end());

        // Print the result
        cout << line << endl;
    }

    return 0;
}
