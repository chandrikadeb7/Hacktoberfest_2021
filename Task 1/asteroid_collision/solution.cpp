#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> asteroids = {5, 10, -5};
    stack<int> s;
    for (int i = 0; i < asteroids.size(); i++)
    {
        bool flag = false;
        int val = asteroids[i];
        while (!s.empty() && s.top() > 0 && val < 0)
        {
            if (s.top() == abs(val))
            {
                s.pop();
                flag = true;
                break;
            }
            else if (s.top() > abs(val))
            {
                flag = true;
                break;
            }
            else
                s.pop();
        }
        if (flag)
            continue;
        s.push(val);
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    for (auto val : ans)
        cout << val << "  ";

    return 0;
}

