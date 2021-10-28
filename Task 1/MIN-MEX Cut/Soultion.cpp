#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T --> 0) {
        string s;
        cin >> s;
        int zeroes = count(s.begin(), s.end(), '0');
        if (zeroes == 0) {
            cout << 0 << '\n';
            continue;
        }
        int first = s.find('0');
        int last = s.rfind('0');
        if (last - first + 1 == zeroes) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}
