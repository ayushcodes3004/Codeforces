#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        // case 1: make a[n] as large as possible
        int maxi = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            maxi = max(maxi, a[i]);
            ans = max(ans, maxi - a[0]);
        }
        // case 2: make a[0] as small as possible
        int mini = a[0];
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, a[i]);
            ans = max(ans, a[n - 1] - mini);
        }
        // case 3: make rotation from 1 to n
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] - a[i + 1]);
        }
        ans = max(ans, a[n - 1] - a[0]);
        cout << ans << endl;
    }
    return 0;
}