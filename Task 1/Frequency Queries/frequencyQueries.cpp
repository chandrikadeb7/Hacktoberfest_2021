#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    map<int, int> m,c;
    while (q-- > 0) {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            c[m[b]]--;
            m[b]++;
            c[m[b]]++;
        }
        else if (a == 2)
        {
            if(c[m[b]]>0)
            {
                c[m[b]]--;
                m[b]--;
                c[m[b]]++;
            }
        }else {
            if(c[b]>0)
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }
    }
    return 0;
}
