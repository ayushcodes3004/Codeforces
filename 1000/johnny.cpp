#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt2 = 0;
        while (a % 2 == 0)
        {
            a /= 2;
            cnt1++;
        }
        while (b % 2 == 0)
        {
            b /= 2;
            cnt2++;
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = ceil(abs(cnt1 - cnt2) / 3.0);
            cout << ans << endl;
        }
    }
    return 0;
}
