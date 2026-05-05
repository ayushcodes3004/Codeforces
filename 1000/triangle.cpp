#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        int k;
        cin >> k;
        int s1 = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            int el;
            cin >> el;
            maxi = max(maxi, el);
            mini = min(mini, el);
            s1 = max(s1, abs(maxi - mini));
        }
        int l;
        cin >> l;
        int s2 = 0;
        maxi = INT_MIN;
        mini = INT_MAX;
        for (int i = 0; i < l; i++)
        {
            int el;
            cin >> el;
            maxi = max(maxi, el);
            mini = min(mini, el);
            s2 = max(s2, abs(maxi - mini));
        }
        int o;
        cin >> o;
        int s3 = 0;
        maxi = INT_MIN;
        mini = INT_MAX;
        for (int i = 0; i < o; i++)
        {
            int el;
            cin >> el;
            maxi = max(maxi, el);
            mini = min(mini, el);
            s3 = max(s3, abs(maxi - mini));
        }
        int m;
        cin >> m;
        int s4 = 0;
        maxi = INT_MIN;
        mini = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            int el;
            cin >> el;
            maxi = max(maxi, el);
            mini = min(mini, el);
            s4 = max(s4, abs(maxi - mini));
        }
        long long ans = max({1LL * s1 * h, 1LL * s2 * h, 1LL * s3 * w, 1LL * s4 * w});
        cout << ans << endl;
    }
    return 0;
}