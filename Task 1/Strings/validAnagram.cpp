#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    if (l1 != l2)
    {
        return false;
    }
    else
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    string s1, s2;
    cout << "Enter two strings: " << endl;
    cout << "String 1: ";
    cin >> s1;
    cout << "String 2: ";
    cin >> s2;
    int res = isAnagram(s1, s2);
    if (res == 1)
    {
        cout << "These two strings are anagram of each other" << endl;
    }
    else
    {
        cout << "These two strings are not anagram of each other" << endl;
    }
    return 0;
}