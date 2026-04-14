#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<long long, long long>> arr(n);
        for (int i = 0; i < n; i++)
        {
            long long mini = a[i] - x;
            long long maxi = a[i] + x;
            arr[i] = {mini, maxi};
        }
        int ans = 0;
        long long l = arr[0].first;
        long long r = arr[0].second;
        for (int i = 1; i < n; i++)
        {
            l = max(l, arr[i].first);
            r = min(r, arr[i].second);
            if (l > r)
            {
                ans++;
                l = arr[i].first;
                r = arr[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}