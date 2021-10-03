// [Q]. Isyana is given the number of visitors at her local theme park on N consecutive days
//      The number of visitors on i(th) day is a[i].
//      A day is record breaking day if it satisfies both of the following conditions.

// CONDITIONS:
//      1. The number of visitors on the day is strictly larger than the previous days.
//      2. Either it is the last day or the number of visitors on the day is strictly larger than the
//         number oof visitors on the following day.

//         Note that the very first day could be a record breaking day
//         Please help Isyana find out the number of record breaking days.

// sample input:

// [1, 2, 0, 7, 2, 0, 2, 2]
//     |     |
//     2 and 7 are the 2 record breaking days

// sample output:
// 8
// 1 2 0 7 2 0 2 2
// total number of record breaking day(s):  2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n + 1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    int mx = -1;

    if (n == 1)
    {
        cout << "1" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << "total number of record breaking day(s):  " << ans << endl;
    return 0;
}