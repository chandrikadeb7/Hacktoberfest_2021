// CPP program to find last index of
// character x in given string.
#include <iostream>
using namespace std;

// Returns last index of x if it is present.
// Else returns -1.
int findLastIndex(string &str, char x)
{
    int index = -1;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == x)
            index = i;
    return index;
}

// Driver code
int main()
{
    // String in which char is to be found
    string str = "codewithgeeks";

    // char whose index is to be found
    char x = 'e';
    int index = findLastIndex(str, x);
    if (index == -1)
        cout << "Character not found";
    else
        cout << "Last index is " << index;
    return 0;
}
