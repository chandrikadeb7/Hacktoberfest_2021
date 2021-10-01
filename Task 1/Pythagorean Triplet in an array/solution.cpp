// A C++ program that returns true if there is a Pythagorean
// Triplet in a given array.
#include <iostream>

using namespace std;

// Returns true if there is Pythagorean triplet in ar[0..n-1]
bool isTriplet(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // Calculate square of array elements
                int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];

                if (x == y + z || y == x + z || z == x + y)
                    return true;
            }
        }
    }

    // If we reach here, no triplet found
    return false;
}

/* Driver program to test above function */
int main()
{
    int ar[] = {3, 1, 4, 6, 5};
    int ar_size = sizeof(ar) / sizeof(ar[0]);
    isTriplet(ar, ar_size) ? cout << "Yes" : cout << "No";
    return 0;
}
