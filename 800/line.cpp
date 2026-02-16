#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        cin >> x;
        vector<int> a(n + 2);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        a[n + 1] = x;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int diff = a[i + 1] - a[i];
            ans = max(ans, diff);
        }
        ans = max(ans, 2 * (a[n + 1] - a[n]));
        cout << ans << endl;
    }
    return 0;
}